#pragma once

template<class T>
class Matrix
{
public:

	Matrix(int total_rows = 0, int total_columns = 0);
	int getRows() const;
	int getColumns() const;
	void setRows(int row);
	void setColumns(int column);
	T getData(int row, int column) const;
	void setData(int row, int column, T element);

	Matrix<T> MatrixOperation(const Matrix<T>& matrix_1, const Matrix<T>& matrix_2, int operation, int power = 0);

private:
	int m_rows;
	int m_columns;
	T m_data[10][10];
};


template <class T>
Matrix<T>::Matrix(int total_rows, int total_columns)
{
	m_rows = total_rows;
	m_columns = total_columns;
}

template <class T>
int Matrix<T>::getRows() const {
	return m_rows;
}

template <class T>
int Matrix<T>::getColumns() const {
	return m_columns;
}

template <class T>
void Matrix<T>::setRows(int rows) {
	m_rows = rows;
}

template <class T>
void Matrix<T>::setColumns(int columns) {
	m_columns = columns;
}

template <class T>
T Matrix<T>::getData(int row, int column) const {
	return m_data[row][column];
}

template <class T>
void Matrix<T>::setData(int row, int column, T element) {
	m_data[row][column] = element;
}

template <class T>
Matrix<T> Matrix<T>::MatrixOperation(const Matrix<T>& matrix_1, const Matrix<T>& matrix_2, int operation, int power) {
	Matrix<T> result;
	
	(matrix_1.getRows() > matrix_2.getRows()) ? result.setRows(matrix_1.getRows()) : result.setRows(matrix_2.getRows());
	(matrix_1.getColumns() > matrix_2.getColumns()) ? result.setColumns(matrix_1.getColumns()) : result.setColumns(matrix_2.getColumns());
	
	for (int i = 0; i < result.getRows(); i++) {
		for (int j = 0; j < result.getColumns(); j++) {
			result.setData(i, j, 0);
			switch (operation) {
			case 1:
				result.setData(i, j, matrix_1.getData(i, j) + matrix_2.getData(i, j));
				break;
			case 2:
				result.setData(i, j, matrix_1.getData(i, j) - matrix_2.getData(i, j));
				break;
			case 3:
				for (int k = 0; k < result.getColumns(); k++) {
					result.setData(i, j, result.getData(i, j) + (matrix_1.getData(i, k) * matrix_2.getData(k, j)));
				}
				break;
			case 4:
				for (int iterator = 0; iterator < power; iterator++) {
					for (int k = 0; k < result.getColumns(); k++) {
						result.setData(i, j, result.getData(i, j) + (matrix_1.getData(i, k) * matrix_1.getData(k, j)));
					}
				}
				break;
			}
		}
	}
	return result;
}

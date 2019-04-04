#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Matrix.h"

using namespace std;

int main() {

	ifstream inMatrix("matrix.txt");

	int number_matrices, number_rows, number_columns;
	
	vector<Matrix<double>> matrix;
	Matrix<double> result;

	inMatrix >> number_matrices;
	
	for (int i = 0; i < number_matrices; i++) {
		inMatrix >> number_rows;
		inMatrix >> number_columns;
		matrix.push_back(Matrix<double>(number_rows, number_columns));
	}

	for (int it = 0; it < number_matrices; it++) {
		for (int i = 0; i < matrix[it].getRows(); i++) {
			for (int j = 0; j < matrix[it].getColumns(); j++) {
				double new_element;
				inMatrix >> new_element;
				matrix[it].setData(i, j, new_element);
			}
		}
	}

	int choice;
	do {
		cout << endl;
		cout << "------------------------------------------------------------------------------------------" << endl;
		cout << "1. Add matrices: " << endl;
		cout << "2. Get matrices: " << endl;
		cout << "99. Exit. " << endl;
		cin >> choice;
		switch (choice) {
		case 1:

			int operation;
			int power;
			cout << "1. +    2. -  3. *   4. ^" << endl;
			cin >> operation;
			if (operation == 4) {
				cout << "What power? " << endl;
				cin >> power;
			}

			result = result.MatrixOperation(matrix[0], matrix[1], operation, power);

			for (int i = 0; i < result.getRows(); i++) {
				cout << endl;
				for (int j = 0; j < result.getColumns(); j++) {
					cout << result.getData(i, j) << "  ";
				}
			}
			break;

		case 2:
			for (int it = 0; it < number_matrices; it++) {
				cout << endl << "Matrix " << it << " : ";
				for (int i = 0; i < matrix[it].getRows(); i++) {
					cout << endl;
					for (int j = 0; j < matrix[it].getColumns(); j++) {
						cout << "   " << matrix[it].getData(i, j);
					}
				}
				cout << endl;
			}
			break;
		}
	} while (choice != 99);

	return 0;
}
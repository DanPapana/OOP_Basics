#include "CComplex.h"

//using namespace std;

int main() {
	
	vector<CComplex*> Zucker;
	ifstream inFile("input.txt");
	CComplex Odd, Even, sum;

	float temp_real;
	float temp_imag;
	
	int choice;
	do {
		cout << endl << "1. More:     "; 
		cout << "2. Show:   ";
		cout << "3. Add:   ";
		cout << "4. Substract:   ";
		cout << "5. Multiply:   " << endl;
		cout << "6. Divide:   ";
		cout << "7. Module: ";
		cout << "8. Power! ";
		cout << "9. Solve:      ";
		cout << "10. EXIT. " << endl;
	
		cin >> choice;
		switch (choice) {

		case 1:

			inFile >> temp_real;
			inFile >> temp_imag;
			Zucker.push_back(new CComplex(temp_real, temp_imag));
			if (temp_imag != 0) {
				cout << "Succesfully added z = " << temp_real << " + " << temp_imag << "i" << endl;
			}
			else if (temp_real != 0) {
				cout << "Succesfully added z = " << temp_real << endl;
			}
			else {
				cout << "Succesfully added nothing, how funny." << endl;
			}
				break;

		case 2:

			for (unsigned int i = 0; i < Zucker.size(); i++) {
				cout << "z[" << i << "] = " << Zucker[i]->getReal() << " + " << Zucker[i]->getImag() << "i" << endl;
			}
			break;

		case 3:
			
			cout << "Which numbers to add?" << endl;
			cin >> temp_real;
			cin >> temp_imag; ///shamelesly reusing variableeees
			sum = *Zucker[temp_real] + *Zucker[temp_imag];
			cout << "z[" << temp_real << "] + z[" << temp_imag << "] = " << sum.getReal() << " + " << sum.getImag() << "i" << endl;
			break;

		case 4:

			cout << "Which numbers to substract?" << endl;
			cin >> temp_real;
			cin >> temp_imag;
			sum = *Zucker[temp_real] - *Zucker[temp_imag];
			cout << "z[" << temp_real << "] - z[" << temp_imag << "] = " << sum.getReal() << " + (" << sum.getImag() << ")i" << endl;
			break;

		case 5:

			cout << "Which numbers to multiply?" << endl;
			cin >> temp_real;
			cin >> temp_imag;
			sum = *Zucker[temp_real] * *Zucker[temp_imag];
			cout << "z[" << temp_real << "] * z[" << temp_imag << "] = " << sum.getReal() << " + (" << sum.getImag() << ")i" << endl;
			break;

		case 6:

			cout << "Which numbers to divide?" << endl;
			cin >> temp_real;
			cin >> temp_imag;
			sum = *Zucker[temp_real] / *Zucker[temp_imag];
			cout << "z[" << temp_real << "] / z[" << temp_imag << "] = " << sum.getReal() << " + (" << sum.getImag() << ")i" << endl;
			break;

		case 7:

			cout << "Which number?" << endl;
			cin >> temp_real;
			cout << ~*Zucker[temp_real];
			break;

		case 8:

			cout << "Which one and what power?" << endl;
			cin >> temp_real; ///the one
			cin >> temp_imag; ///power
			sum = *(Zucker[temp_real])^temp_imag;
			cout << "z[" << temp_real << "] ^" << temp_imag << " = " << sum.getReal() << " + " << sum.getImag() << "i" << endl;
			break;

		case 9:
			
			for (int i = 0; i < Zucker.size(); i ++) {
				if (i % 2 == 0) {
					Even = Even + ((*Zucker[i]) ^ 4);
				} else {
					Odd = Odd + ((*Zucker[i]) ^ 3);
				}
			}
			sum = Odd / Even;
			cout << "The result is === " << sum.getReal() << " + (" << sum.getImag() << ")i" << endl;
			break;

		case 10:
			return 0;

		default:
			break;
		}
		
	} while (choice != 0);
	return 0;
}
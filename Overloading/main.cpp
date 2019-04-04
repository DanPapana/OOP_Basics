#include <iostream>
#include <vector>
#include <fstream>
#include "Fraction.h"

using namespace std;

int main() {
	
	ifstream inFile("input.txt");
	vector<Fraction*> fraction;
	Fraction solution;

	int choice;
	int id_1;
	int id_2;
	do {
		cout << "1. New	";
		cout << "2. Show ";
		cout << "3. Add	";
		cout << "4. Substract ";
		cout << "5. Multiply ";
		cout << "6. Divide ";
		cout << "7. Solve ";
		cout << "99. Exit" << endl;
		
		cin >> choice;

		switch (choice) {
		case 1:

			system("CLS");
			int temp_num;
			int temp_denum;
			inFile >> temp_num;
			inFile >> temp_denum;
			fraction.push_back(new Fraction(temp_num, temp_denum));
			cout << "Succesfully added " << temp_num << " / " << temp_denum << endl;
			break;

		case 2:

			system("CLS");
			for (int i = 0; i < fraction.size(); i++) {
				cout << "a[" << i << "] " << fraction[i]->getNumerator() << " / " << fraction[i]->getDenominator() << endl;
			}
			break;

		case 3:
			//Switch aici cu + - * /
			cout << "Which fractions? " << endl;
			cin >> id_1;
			cin >> id_2;
			if (id_1 < fraction.size() && id_2 < fraction.size()) {
				solution = *fraction[id_1] + *fraction[id_2];
				cout << "The result is " << solution.getNumerator() << " / " << solution.getDenominator() << endl;
			}
			break;
			
		case 4:

			cout << "Which fractions, brother? " << endl;
			cin >> id_1;
			cin >> id_2;
			if (id_1 < fraction.size() && id_2 < fraction.size()) {
				solution = *fraction[id_1] - *fraction[id_2];
				cout << "The result is " << solution.getNumerator() << " / " << solution.getDenominator() << endl;
			}
			break;

		case 5:

			cout << "Which fractions, budha? " << endl;
			cin >> id_1;
			cin >> id_2;
			if (id_1 < fraction.size() && id_2 < fraction.size()) {
				solution = *fraction[id_1] * *fraction[id_2];
				cout << "The result is " << solution.getNumerator() << " / " << solution.getDenominator() << endl;
			}
			break;

		case 6:

			cout << "Which fractions, brat? " << endl;
			cin >> id_1;
			cin >> id_2;
			if (id_1 < fraction.size() && id_2 < fraction.size()) {
				solution = *fraction[id_1] / *fraction[id_2];
				cout << "The result is " << solution.getNumerator() << " / " << solution.getDenominator() << endl;
			}
			break;

		case 7:
			cout << "Which fractions, brat? " << endl;
			cin >> id_1;
			if (id_1 < fraction.size()) {
				solution = *fraction[id_1] + 5;
				cout << "The result is " << solution.getNumerator() << " / " << solution.getDenominator() << endl;
			}
	
			break;
		}
	} while (choice != 99);

	return 0;
}
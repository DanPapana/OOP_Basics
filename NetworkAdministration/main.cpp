#include "Network.h"
#include "Administrator.h"
#include "User.h"

int main() {

	//Network* network;

	ifstream myFile("input.txt");

	int choice;
	do {
		cout << "1. Sign up: (";// << user.size() << ") users currently" << endl;
		cout << "2. Log in:" << endl;
		cin >> choice;
		///Switch in switch;
		cout << "3. Log out: " << endl;
		cout << "4. Tweet something: " << endl;
		switch (choice) {
		case 1:

			break;
		}
	} while (choice != 99);

	return 0;
}
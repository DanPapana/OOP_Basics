#include "List.h"
using namespace std;

int main() {

	List list;

	ifstream outFile;
	outFile.open("input.txt");
	
	int choice;
	do {

		cout << "1. Add an element to the list: " << endl;
		cout << "2. Delete an element from the list: " << endl;
		cout << "3. Delete the elements smaller than: " << endl;
		cout << "4. Find the average: " << endl;
		cout << "5. Show me the list: " << endl;
		cout << "9. Exit the menu" << endl;
		cout << "Your choice: " << endl;
		cin >> choice;

		///Clears the screen
		system("CLS");

		switch (choice) {
		case 1:
			cout << "--------------------------------------------------------------------------------------------" << endl << endl;

			///if there are no more elements in the file, generate a random one

			int new_value;
			outFile >> new_value;
			if (list.getSize() != 0 && (new_value == list.showList(list.getSize() - 1) || new_value == 0)) {
				new_value = rand() % 20 + 1;
			}
			list.addNode(new_value);
			cout << "Added " << new_value << " to the list" << endl << endl;
			cout << "--------------------------------------------------------------------------------------------" << endl;
			break;

		case 2:
			cout << "--------------------------------------------------------------------------------------------" << endl << endl;
			cout << "Which one to delete? " << endl << endl;
			int deleteable;
			cin >> deleteable;
			list.deleteNode(deleteable);
			cout << "Deleted " << deleteable << " from the list" << endl << endl;
			cout << "--------------------------------------------------------------------------------------------" << endl;
			break;

		case 3:
			cout << "--------------------------------------------------------------------------------------------" << endl << endl;
			cout << endl << "Smaller than...?" << endl << endl;
			int threshold;
			cin >> threshold;
			list.deleteBelowThreshold(threshold);
			cout << "--------------------------------------------------------------------------------------------" << endl;
			break;

		case 4:
			cout << "--------------------------------------------------------------------------------------------" << endl << endl;
			cout << endl << "Finding average..." << endl;
			cout << "The average is: " << setprecision(2) << list.findAverage() << endl;
			cout << "--------------------------------------------------------------------------------------------" << endl;
			break;

		case 5:
			cout << "--------------------------------------------------------------------------------------------" << endl << endl;
			int i;
			if (list.getSize() > 0) {
				cout << "The list's elements are: { ";
				for (i = 0; i < list.getSize() - 1; i++) {
					cout << list.showList(i) << ", ";
				}
				cout << list.showList(list.getSize() - 1);
				cout << " }" << endl << endl;
			}
			else { cout << "The list is empty" << endl; }
			cout << "--------------------------------------------------------------------------------------------" << endl;
			break;
		case 9:
			return 0;
			break;
		}
		
		cout << "--------------------------------------------------------------------------------------------" << endl << endl;
		int i;
		if (list.getSize() > 0) {
			cout << "The list's elements are: { ";
			for (i = 0; i < list.getSize() - 1; i++) {
				cout << list.showList(i) << ", ";
			}
			cout << list.showList(list.getSize() - 1);
			cout << " }" << endl << endl;
		}
		else { cout << "The list is empty" << endl; }
		cout << "--------------------------------------------------------------------------------------------" << endl << endl;

	
	} while (choice != 10);
	outFile.close();
	return 0;
}
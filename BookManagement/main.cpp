#include "Book.h"

using namespace std;

int main() {
	Library library;
	string finder;
	int choice = 0;
	do {
		system("CLS");
		string new_title;
		string new_author;
		string new_publisher;
		string new_ISBN;
		int new_year;
		int new_price;
		cout << "1. Add a book: " << endl;
		cout << "2. Show the books" << endl;
		cout << "3. Find a book (Name, publisher or ISBN): " << endl;
		cout << "4. Exit" << endl << " > ";
		cin >> choice;
		cout << endl;
		system("CLS");
		switch (choice) {
		case 1:
			cout << "-------------------------------------------------------------" << endl;
			cout << "Title: ";
			cin >> new_title;
			cout << "Author: ";
			cin >> new_author;
			cout << "Publisher: ";
			cin >> new_publisher;
			cout << "ISBN: ";
			cin >> new_ISBN;
			if (library.check_ISBN(new_ISBN)) {
				cout << "======================================================" << endl;
				cout << "        !!! The ISBN is not unique, try again. !!!" << endl;
				cout << "======================================================" << endl;
				system("Pause");
				break;
			}
			cout << "Year: ";
			cin >> new_year;
			cout << "Price: ";
			cin >> new_price;
			cout << "------------------------------------------------------------" << endl << endl;
			library.add_book(new_title, new_author, new_publisher, new_ISBN, new_year, new_price);
			break;
		case 2:
			cout << "======================================================" << endl;
			cout << "        The books are:   " << endl;
			for (int i = 0; i < library.get_quantity(); i++) {
				cout << "Title: " << library.get_title(i) << endl;
				cout << "Author: " << library.get_author(i) << endl;
				cout << "Publisher: " << library.get_publisher(i) << endl;
				cout << "ISBN: " << library.get_ISBN(i) << endl;
				cout << "Year: " << library.get_year(i) << endl;
				cout << "Price: " << library.get_price(i) << endl << endl;
			}
			cout << "====================================================" << endl;
			system("Pause");
			break;
		case 3:
			cout << "Introduce the Name, Publisher or ISBN: " << endl;
			cin >> finder;
			int j = library.find_book(finder);
			if (j > 0) {
				cout << "----------------------------------------------------" << endl;
				cout << "		THE BOOK WAS FOUND!" << endl;
				cout << "Title: " << library.get_title(j) << endl;
				cout << "Author: " << library.get_author(j) << endl;
				cout << "Publisher: " << library.get_publisher(j) << endl;
				cout << "ISBN: " << library.get_ISBN(j) << endl;
				cout << "Year: " << library.get_year(j) << endl;
				cout << "Price: " << library.get_price(j) << endl;
				cout << "-----------------------------------------------------" << endl;
			}
			else {
				cout << "======================================================" << endl;
				cout << "!!!	 The book was not found.   !!!" << endl;
				cout << "======================================================" << endl;
			}
			system("Pause");
			break;
		}
		
	} while (choice != 4);
	return 0;
}
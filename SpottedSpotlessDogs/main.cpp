#include "Dog.h"
#include "Spotless.h"
#include "Spotted.h"

using namespace std;

int main() {

	vector<Dog*> dogs;
	vector<Spotless*> spotless;
	vector<Spotted*> spotted;

	ifstream inFile("inputs.txt");

	string Name;
	string Color;
	int weight;
	int height;
	int age;
	int numberSpots;

	if (inFile.is_open()) {
		for (int i = 0; i < 4; i++) {
			inFile >> Name >> Color >> weight >> height >> age >> numberSpots;

			dogs.push_back(new Dog(Name, Color, weight, height, age));

			if (numberSpots == 0) {
				spotless.push_back(new Spotless(*dogs[i]));
			}
			else {
				spotted.push_back(new Spotted(*dogs[i], numberSpots));
			}

		}
		inFile.close();
	}

	int choice;

	do {
		cout << endl;
		cout << "------------------------------------------------------------------------------------------" << endl;
		cout << "1. Show me all the dogs: " << endl;
		cout << "2. Spotted dogs: " << endl;
		cout << "3. Spotless dogs: " << endl;
		cout << "5. Woof." << endl << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			for (unsigned int i = 0; i < 4; i++) {
				cout << "Name: " << dogs[i]->getName() << endl;
				cout << "Color: " << dogs[i]->getColor() << endl;
				cout << "Age: " << dogs[i]->getAge() << endl;
				cout << "Weight: " << dogs[i]->getWeight() << endl;
				cout << "Height: " << dogs[i]->getHeight() << endl;
			}
			break;
		case 2:
			for (unsigned int i = 0; i < spotted.size(); i++) {
				cout << "Name: " << spotted[i]->getName() << endl;
				cout << "Color: " << spotted[i]->getColor() << endl;
				cout << "Age: " << spotted[i]->getAge() << endl;
				cout << "Weight: " << spotted[i]->getWeight() << endl;
				cout << "Height: " << spotted[i]->getHeight() << endl;
				cout << "Spots: " << spotted[i]->getSpots() << endl;
			}
			break;
		case 3:
			for (unsigned int i = 0; i < spotless.size(); i++) {
				cout << "Name: " << spotless[i]->getName() << endl;
				cout << "Color: " << spotless[i]->getColor() << endl;
				cout << "Age: " << spotless[i]->getAge() << endl;
				cout << "Weight: " << spotless[i]->getWeight() << endl;
				cout << "Height: " << spotless[i]->getHeight() << endl;
			}
			break;
		}
	} while (choice != 5);

	system("Pause");

	return 0;
}
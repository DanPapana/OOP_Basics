#include "Dictionary.h"

using namespace std;

int main() {

	vector<Dictionary*> words;
	ifstream inFile("input.txt");

	string new_word;
	string searched_word;

	if (inFile.is_open())
	{
		while (getline(inFile, new_word))
		{
			words.push_back(new Dictionary(new_word));
		}
		inFile.close();
	}

	int choice;
	do {
		cout << endl << "Choose an option: " << endl;
		cout << "1. Add a synonym word" << endl;
		cout << "2. Show all the words" << endl;
		cout << "3. Show all the synonyms for a given word" << endl;
		cin >> choice;
		switch (choice) {

		case 1:
			cout << "Give me the synonym, give me the WORD" << endl;
			cin >> new_word;
			cin >> searched_word;
	
			for (unsigned int i = 0; i < words.size(); i++) {
				if (words[i]->getWord() == searched_word) {
					words[i]->addSynonym(new_word);
					cout << "Added " << new_word << " to the list of synonyms for " << searched_word << endl;
					break;
				}
				else if ((i == words.size() - 1) && (words[words.size() - 1]->getWord() != searched_word)) {
					cout << endl << "WORD NOT FOUND" << endl << endl;
					break;
				}
			}
			break;
		case 2:
			for (unsigned int i = 0; i < words.size(); i++) {
				cout << words[i]->getWord() << endl;
			}
			break;
		case 3:
			cout << "Give me the word" << endl;
			cin >> searched_word;
			for (unsigned int i = 0; i < words.size(); i++) {
				if (words[i]->getWord() == searched_word) {
					cout << "The synonyms are: " << endl;
					for (int j = 0; j < words[i]->getSize(); j++) {
						cout << words[i]->getSynonyms(j) << endl;
					}
					break;
				}
				else if ((i == words.size() - 1) && (words[words.size() - 1]->getWord() != searched_word)) {
					cout << endl << "WORD NOT FOUND" << endl << endl;
					break;
				}
			}
			break;
		default:
			break;
		}	
	} while (choice != 9);

	return 0;
}
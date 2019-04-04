#include "Dictionary.h"

Dictionary::Dictionary() {
	size = 0;
	head = new Word();
}

Dictionary::Dictionary(const string& new_word)
{
	mWord = new_word;
}

Dictionary::Word::Word()
{
}

Dictionary::Word::Word(const string& new_word) {
	mSynonym = new_word;
}

void Dictionary::addSynonym(const string& newSynonym) {
	Word *pivot = new Word(newSynonym);
	Word *head = new Word();

	if (size == 0) {
		head->next = pivot;
	}
	else {
		Word* temp = head;
		
		while (temp->next != NULL)  {
			temp = temp->next;
		}
		temp->next = pivot;
	}
	
	size++;
}

string Dictionary::getWord() {
	return mWord;
}

int Dictionary::getSize() {
	return size;
}

string Dictionary::getSynonyms(const int& number) {

	Word* head = new Word();
	Word* temp = head->next;
	
	if (head->next != NULL) {
		for (int i = 0; i < number; i++) {
			temp = temp->next;
		}
		return temp->mSynonym;
	}

}

Dictionary::~Dictionary() 
{
}

Dictionary::Word::~Word()
{
}

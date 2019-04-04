#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Dictionary {
public:

	Dictionary();
	Dictionary(const string&);
	void addSynonym(const string&);
	string getWord();
	string getSynonyms(const int&);
	int getSize();
	~Dictionary();

	class Word
	{
	public:
		Word();
		Word(const string&);
		~Word();
	private:
		friend class Dictionary;
		string mSynonym;
		Word *next;
	};

private:
	int size;
	string mWord;
	Word* head;
};
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Book
{
private:
	string m_title;
	string m_author;
	string m_publisher;
	string m_ISBN;
	int m_year;
	int m_price;
public:
	Book();
	void set_book(string title, string author, string publisher, string ISBN, int year, int price);
	bool search_book(string finder);
	string get_title();
	string get_author();
	string get_publisher();
	string get_ISBN();
	int get_year();
	int get_price();
	~Book();
};

class Library {
public:
	Library();
	int get_quantity();
	bool check_ISBN(string search_ISBN);
	void add_book(string title, string author, string publisher, string ISBN, int year, int price);
	string get_title(int i);
	string get_author(int i);
	string get_publisher(int i);
	string get_ISBN(int i);
	int get_year(int i);
	int get_price(int i);
	int find_book(string finder);
	~Library() {
		///	delete [10]books;
	}
private:
	Book books[10];
	int book_quantity;

};
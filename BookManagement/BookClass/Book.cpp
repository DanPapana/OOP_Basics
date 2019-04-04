#include "Book.h"

Book::Book()
{
}

Library::Library(): book_quantity(0) {

	///Book *books = new Book[10];
}

bool Library::check_ISBN(string search_ISBN) {
	for (int i = 0; i < book_quantity; i++) {
		if (books[i].get_ISBN() == search_ISBN) {
			return true;
		}
	}
	return false;
}

string Book::get_title() {
	return m_title;
}

string Book::get_author() {
	return m_author;
}

string Book::get_publisher() {
	return m_publisher;
}

string Book::get_ISBN() {
	return m_ISBN;
}

int Book::get_year() {
	return m_year;
}

int Book::get_price() {
	return m_price;
}

string Library::get_title(int i) {
	string temp_title = books[i].get_title();
	return temp_title;
}

string Library::get_author(int i) {
	string temp_author = books[i].get_author();
	return temp_author;
}

string Library::get_publisher(int i) {
	return books[i].get_publisher();
	
}

string Library::get_ISBN(int i) {
	string temp_ISBN = books[i].get_ISBN();
	return temp_ISBN;
}

int Library::get_year(int i) {
	int temp_year = books[i].get_year();
	return temp_year;
}

int Library::get_price(int i) {
	int temp_price = books[i].get_price();
	return temp_price;
}

int Library::get_quantity() {
	return book_quantity;
}

void Library::add_book(string title, string author, string publisher, string ISBN, int year, int price) {
	books[book_quantity].set_book(title, author, publisher, ISBN, year, price);
	book_quantity++;
}

void Book::set_book(string title, string author, string publisher, string ISBN, int year, int price) {
	this->m_title = title;
	this->m_author = author;
	this->m_publisher = publisher;
	this->m_ISBN = ISBN;
	this->m_year = year;
	this->m_price = price;
}

int Library::find_book(string finder) {
	for (int i = 0; i < book_quantity; i++) {
		if (books[i].search_book(finder)) {
			return i;
		}
	} 
	return -1;
}

bool Book::search_book(string finder) {
	if (this->m_title == finder || this->m_publisher == finder || this->m_ISBN == finder) {
		return true;
	}
	return false;
}

Book::~Book()
{
}
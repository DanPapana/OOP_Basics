#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip> 

class List
{
public:
	List();
	void addNode(const int&);
	void deleteNode(const int&);
	void deleteBelowThreshold(const int&);
	double findAverage();
	int showList(const int&);
	int getSize();
	~List();

	class Node
	{
	public:
		Node();
		Node(const int&);
	
		~Node();
	private:
		friend class List;
		int element;
		Node *next;
	};
private:
	int size;
	Node *head;
};


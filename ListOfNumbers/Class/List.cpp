#include "List.h"

List::List()
{
	size = 0;
	head = new Node();
}

List::Node::Node() {
	element = 0;
}

List::Node::Node(const int& new_value) {
	element = new_value;
}

void List::addNode(const int& new_value) {
	Node *pivot = new Node(new_value);

	if (size == 0) {
		head->next = pivot;
	}
	else {
		Node* temp = head;
		while (temp->next != NULL) {
			temp = temp->next;
		}
		temp->next = pivot;
	}
	size++;
}

void List::deleteNode(const int& deleteable) {
	Node* temp = head;
	Node *prev = head;
	
	while (temp->next != NULL) {
		prev = temp;
		temp = temp->next;
		if (temp->element == deleteable) {
			prev->next = temp->next;		
			size--;
			break;
		}
	}
	delete(temp);
}

void List::deleteBelowThreshold(const int& threshold) {
	Node* temp = head;
	
	while (temp->next != NULL) {
		temp = temp->next;
		if (temp->element < threshold) {
			Node* toDelete = temp;
			temp = temp->next;
			List::deleteNode(toDelete->element);
		}
	}
}

double List::findAverage() {
	Node* temp = head;

	int sum = 0;
	while (temp->next != NULL) {
		temp = temp->next;
		sum += temp->element;
	}

	return (double)sum / (double)size;
}

int List::getSize() {
	return size;
}

int List::showList(const int& number) {
	Node* temp = head->next;
	for (int i = 0; i < number; i++) {
		temp = temp->next;
	}
	return temp->element;
}

List::Node::~Node()
{
}


List::~List()
{
}
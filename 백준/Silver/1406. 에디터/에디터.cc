#include <iostream>
#include <string>
using namespace std;

class Node {
private:
	char data;
	Node* next;
	Node* prev;
	friend class LinkedList;
};

class LinkedList {
private:
	Node* head;
	Node* tail;
	int size;
	Node* position;
	Node* cursor;
public:
	LinkedList() {
		Node* temp = new Node;
		temp->data = ' ';
		temp->next = tail;
		temp->prev = NULL;
		Node* tmp = new Node;
		tmp->data = ' ';
		tmp->next = NULL;
		tmp->prev = head;
		head = temp;
		tail = tmp;
		position = head;
		cursor = tail;
	}
	void left();
	void right();
	void insert(char c);
	void remove();
	void setting(char str);
	void print();
};

void LinkedList::setting(char str) {
	Node* temp = new Node;
	temp->data = str;
	temp->next = tail;
	temp->prev = position;
	tail->prev = temp;
	position->next = temp;
	position = temp;
}

void LinkedList::left() {
	if (cursor != head->next) {
		cursor = cursor->prev;
	}
}

void LinkedList::right() {
	if (cursor != tail) {
		cursor = cursor->next;
	}
}

void LinkedList::insert(char c) {
	Node* temp = new Node;
	Node* tmp = cursor->prev;
	temp->data = c;
	temp->next = cursor;
	temp->prev = cursor->prev;
	tmp->next = temp;
	cursor->prev = temp;
}

void LinkedList::remove() {
	if (cursor != head->next) {
		Node* temp = cursor->prev;
		Node* node = temp->prev;
		node->next = cursor;
		cursor->prev = node;
		delete temp;
	}
}

void LinkedList::print() {
	Node* temp = head->next;
	while (temp != tail) {
		cout << temp->data;
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	string str;
	string b;
	char c;
	int a;
	cin >> str;
	cin >> a;
	LinkedList edit;
	for (int i = 0; i < str.length(); i++) {
		edit.setting(str[i]);
	}
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b == "L") {
			edit.left();
		}
		else if (b == "D") {
			edit.right();
		}
		else if (b == "B") {
			edit.remove();
		}
		else if (b == "P") {
			cin >> c;
			edit.insert(c);
		}
	}
	edit.print();
}
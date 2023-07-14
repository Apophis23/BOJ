#include <iostream>
#include <string>
using namespace std;

struct Node {
	char data;
	Node* next;
};

class listStack {
private:
	Node* top;
	int size;
public:
	listStack() {
		size = 0;
		top = NULL;
	}

	char Top() {
		return top->data;
	}

	bool empty() {
		return (size == 0);
	}

	int Size() {
		return size;
	}

	void push(char data) {
		Node* temp = new Node;
		temp->data = data;
		temp->next = top;
		top = temp;
		size++;
	};

	void pop() {
		Node* temp = top;
		top = top->next;
		delete temp;
		size--;
	}
};

int main() {
	string str;
	listStack s;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] != '*' && str[i] != '/' && str[i] != '+' && str[i] != '-' && str[i] != '(' && str[i] != ')') {
			cout << str[i];
		}
		else {
			if (str[i] == '(') {
				s.push(str[i]);
				continue;
			}
			if (str[i] == ')') {
				while (s.Top() != '(') {
					cout << s.Top();
					s.pop();
				}
				s.pop();
				continue;
			}
			if (str[i] == '*' || str[i] == '/') {
				while (s.empty() != true && (s.Top() == '*' || s.Top() == '/')) {
					cout << s.Top();
					s.pop();
				}
				s.push(str[i]);
			}
			else {
				while (s.empty() != true && s.Top() != '(') {
					cout << s.Top();
					s.pop();
				}
				s.push(str[i]);
			}
		}
	}
	while (s.empty() != true) {
		cout << s.Top();
		s.pop();
	}
}
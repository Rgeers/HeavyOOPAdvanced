#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
class Stack {
private:
	vector<T> objects;

public:
	void push(T const&); 
	void pop();
	T top() const; 
	bool empty() const { 
		return objects.empty();
	}
};

template <class T>
void Stack<T>::push(T const& elem) {
	objects.push_back(elem);
}

template <class T>
void Stack<T>::pop() {
	if (objects.empty()) {
		//doe niks
	}
	objects.pop_back();
}

template <class T>
T Stack<T>::top() const {
	if (objects.empty()) {
		//doe niks
	}
	return objects.back();
}

int main() {
	Stack<int> intStack;
		Stack<string> stringStack;
		intStack.push(9999);
		cout << intStack.top() << endl;
		stringStack.push("Ik ben in een string gedawnderd");
		cout << stringStack.top() << std::endl;
		stringStack.pop();

		string input;
		cin >> input;
	}
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;



/*
void sort(int input[], int count) {
	int tmp;
	//bubblesort
	for (int i = 0; i < count; i++) {

	}
}
*/

template<typename T>
void print(T input[], int count) {
	for (int i = 0; i < count; i++) {
		count << input[i] << endl;
	}
}

template<typename T>
void sort(T input[], int count) {
	T tmp;
	//bubblesort
	for (int i = 0; i < count; i++) {
		for (int j = i + 1; j < count; j++) {
			if (input[j] < input[i]) {
				tmp = input[i];
				input[i] = input[j];
				input[j] = tmp;
			}
		}
	}
}

int main() {
	/*for (int i : {1, 3, 180, 2, -15}) {
		floatArray.push_back(i);
	}
	for (string s : {"aap", "noot", "mies", "boom", "roos", "vuur"}) {
		//cout << sortingTool<string>(s, "henkie") << endl;
	}
	*/
	string stringArray[] = { "aap", "noot", "mies", "boom", "roos", "vuur" };
	float floatArray[] = { 1, 3, 180, 2, -15 };
	sort(floatArray, 5);
	sort(stringArray, 5);
	//print(floatArray, 5);

	string input;
	cin >> input;
	return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector<string> stringArray;
vector<float> floatArray;
template<typename T>
T sortingTool(T first, T second) {
	
	std::sort();
	if (first > second) return first;
	return second;
}




int main() {


	for (int i : {1, 3, 180, 2, -15}) {
		floatArray.push_back(i);
	}

	for (string s : {"aap", "noot", "mies", "boom", "roos", "vuur"}) {
		cout << sortingTool<string>(s, "henkie") << endl;
	}
	string input;
	cin >> input;
	return 0;
}
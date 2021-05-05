#include "Array.h"
#include <iostream>
using namespace std;

void DisplayArray(const tlr::array<string, 4>&a) {
	for (size_t i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	cout << "**array**\n";
	tlr::array<string, 4> words{ "hello", "world", "neumont", "college" };
	words[0] = "welcome";
	DisplayArray(words);

	cout << "**copy**\n";
	tlr::array<string, 4> copy{ words };
	copy[1] = "to";
	DisplayArray(copy);

	cout << "**swap**\n";
	words.swap(copy);
	DisplayArray(words);
	DisplayArray(copy);

	cout << "**fill**\n";
	copy.fill("now!");
	DisplayArray(copy);

	cout << "front: " << words.front() << endl;
	cout << "back: " << words.back() << endl;
	cout << "size: " << words.size() << endl;
	cout << "data: " << words.data() << endl;
}
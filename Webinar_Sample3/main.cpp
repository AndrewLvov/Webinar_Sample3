#include <iostream>
#include <fstream>
#include <string>

#include "main.h"

using namespace std;

void f() {
	cout << "Hi!";
}

int main() {
	ifstream ifs("in.txt");
	while(!ifs.eof()) {
		string line;
		getline(ifs, line);
		cout << line << "\n";
	}

	return 0;
}
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
	string line;
	getline(ifs, line);
	cout << line;

	return 0;
}
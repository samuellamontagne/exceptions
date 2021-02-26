//============================================================================
// Name        : test.cpp
// Author      : Samuel Lamontagne
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "SmartArray.h"

using namespace std;

int main() {

	SmartArray sa = SmartArray(5);
	sa.at(0) = 2;

	cout << sa.at(0) << endl;

	SmartArray sa2 = sa.copy();

	cout << sa2.at(0) << endl;

	sa2.at(7) = 99; // index out of bounds: exceptions

	return 0;
}

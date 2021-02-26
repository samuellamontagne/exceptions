//============================================================================
// Name        : exceptions.cpp
// Author      : Samuel Lamontagne & Claire Mevolhon
// Version     :
// Copyright   : Your copyright notice
// Description : Smart Array that throw expetions
//============================================================================

#include <iostream>
#include "SmartArray.h"

using namespace std;

int main() {
	try{
		SmartArray sa = SmartArray(5);
		vector<int> list;
		list.push_back(1);
		list.push_back(2);
		list.push_back(3);

		SmartArray sal = SmartArray(list);

		for(int i = 0; i < list.size() ; i++)
			cout << sal.at(i) << endl;

		sa.at(0) = 2;

		cout << sa.at(0) << endl;

		SmartArray sa2 = sa.copy();

		cout << sa2.at(0) << endl;

		sa2.at(7) = 99; // index out of bounds: exceptions

	} catch(const char* e){
		cout << e << endl;
		exit(-1);
	}

	return 0;
}

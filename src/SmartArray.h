/*
 * SmartArray.h
 *
 *  Created on: Feb. 26, 2021
 *      Author: samuel
 */

#ifndef SMARTARRAY_H_
#define SMARTARRAY_H_

#include <vector>
#include <iostream>

using namespace std;

class SmartArray {
public:
	SmartArray(int size);
	int& at(int position);
	SmartArray copy();

private:
	vector<int> array1;

};

#endif /* SMARTARRAY_H_ */

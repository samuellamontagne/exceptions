/*
 * SmartArray.cpp
 *
 *  Created on: Feb. 26, 2021
 *      Author: samuel
 */

#include "SmartArray.h"

using namespace std;

SmartArray::SmartArray(int size) {
	array1.resize(size);
}

SmartArray::SmartArray(vector<int> startList){
	array1 = startList;
}

int& SmartArray::at(int position){

	if(position > array1.size() || position < 0)
		throw "out-of-bound index";

	return (array1.at(position));
}

SmartArray SmartArray::copy(){
	return *this;
}

int& SmartArray::operator[](const int& position){
	return (array1.at(position));
}


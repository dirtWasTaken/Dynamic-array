#pragma once
#include <iostream>
#include <assert.h>
#include <windows.h>
#include <algorithm>
#include <cstdlib>

template<typename T_>
class DynamicArray
{
public:

	DynamicArray() {}

	virtual ~DynamicArray () {}

	void dynamic()
	{
		T_ arrayValue = 10;

		int myArray[arrayValue];

		for (size_t i = 0; i < arrayValue; i++)
		{
			myArray[i] = rand() % 200 + 1;
			std::cout << myArray[i] << "\n";
		}
	}


};


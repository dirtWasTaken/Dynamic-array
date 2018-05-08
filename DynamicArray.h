#pragma once
#include <iostream>
#include <assert.h>
#include <windows.h>
#include <algorithm>
#include <cstdlib>


/*************************************************************************************
Templated 
**************************************************************************************/
template<typename T_>
class DynamicArray

{
public:

	DynamicArray() {}

	virtual ~DynamicArray () {}

	/*************************************************************************************
	the initial array with a user defined size, this is saved and used to insert a user
	defined value anywhere in the array 
	**************************************************************************************/
	void dynamic()
	{
		std::cout << "Enter the capacity of your array: ";
		std::cin >> capacity;
		std::cout << "\n";
		Arrayptr = new T_ [capacity];
		for (size_t i = 0; i < capacity; i++)
		{
			Arrayptr[i] = rand() % 10 + 1;
			std::cout << Arrayptr[i] << "  ";
		}
	}

	/*************************************************************************************
	this function takes to user inputs, the value they want in the array and which element they want it in
	**************************************************************************************/
	int set(T_ value, T_ index)
	{
		while (arrayTest == false)
		{
			std::cout << "\n\nWhat value do you want in your array? ";
			std::cin >> value;
			std::cout << "\n\nWhere do you want this in your array? ";
			std::cin >> index;
			int indexPass = index;
			int valuePass = value;

			if (indexPass >= capacity)
			{
				newArrayPtr = new T_[indexPass];
				for (size_t i = 0; i < indexPass; i++)
				{
					if (i == indexPass - 1)
					{
						newArrayPtr[i] = valuePass;
						std::cout << " Here is your value->";
						std::cout << newArrayPtr[i];
					}
					else
					{
						newArrayPtr[i] = Arrayptr[i];
						std::cout << newArrayPtr[i] << "  ";
					}
					arrayTest = true;
				}
			}

			else if (indexPass < capacity)
			{
				for (size_t i = 0; i < capacity; i++)
				{
					if (i == indexPass - 1)
					{
					std::cout << "->" << valuePass << "<-  ";
					}
					std::cout << Arrayptr[i] << "  ";
					arrayTest = true;
				}
			}
		}
		delete Arrayptr;
		delete newArrayPtr;
		return value;
		return index;
	}


private:
	T_ capacity = 0;

	T_ valuePass;

	T_ indexPass;

	T_ * newArrayPtr = nullptr;

	T_ * Arrayptr = nullptr;

	bool arrayTest = false;
};



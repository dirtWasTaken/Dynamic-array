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
		std::cout << "Enter the capacity of your array: ";
		std::cin >> capacity;
		std::cout << "\n";
		Arrayptr = new T_ [capacity];
		for (size_t i = 0; i < capacity; i++)
		{
			Arrayptr[i] = rand() % 100000 + 1;
			std::cout << Arrayptr[i] << "  ";
		}
	}

	int set(T_ value, T_ index)
	{
		while (index == 0)
		{
			std::cout << "What value do you want in your array? ";
			std::cin >> value;
			std::cout << "\n\nWhere do you want this in your array? ";
			std::cin >> index;
			return value;
			return index;
		}

	}

	int arrayAllocation(T_ value, T_ index)
	{
		if (index >= capacity)
		{
			delete Arrayptr;
			newArrayPtr = new T_ [index];
			for (size_t i = 0; i < index; i++)
			{
				if (i == index)
				{
					newArrayPtr[index] = value;
					std::cout << newArrayPtr[index];
				}
				else
				{
					newArrayPtr[i] = rand() & 100 + 1;
					std::cout << newArrayPtr[i] << "  ";
				}
			}
			return value;
			return index;
		}

		else if (index < capacity)
		{
			Arrayptr[capacity] = value;
			return value;
			return index;
		}
	}

private:
	T_ * newArrayPtr = nullptr;

	T_ * Arrayptr = nullptr;

	int capacity = 0;

};


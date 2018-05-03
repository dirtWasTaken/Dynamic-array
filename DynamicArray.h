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
			Arrayptr[i] = rand() % 100 + 1;
			std::cout << Arrayptr[i] << "  ";
		}
	}

	int set(T_ index, T_ value)
	{
			std::cout << "What value do you want in your array? ";
			std::cin >> value;
			return value;
			std::cout << "\n\nWhere do you want this in your array? ";
			std::cin >> index;
			return index;

		if (index >= capacity)
		{
			delete Arrayptr;
			newArrayPtr = new T_ [index];
			for (size_t i = 0; i < index; i++)
			{
				if (i == index)
				{
					newArrayPtr[index] = value;
				}
				else
				{
				newArrayPtr[i] = rand
				std::cout << "";
				}
			}
		}
		else if (index < capacity)
		{
			Arrayptr[capacity] = value;
		}
	}

private:
	T_ * newArrayPtr = nullptr;

	T_ * Arrayptr = nullptr;

	int capacity = 0;

};


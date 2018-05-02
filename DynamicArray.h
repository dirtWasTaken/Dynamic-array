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
		Arrayptr = new int[capacity];
		for (size_t i = 0; i < capacity; i++)
		{
			Arrayptr[i] = rand() % 100 + 1;
			std::cout << Arrayptr[i] << "  ";
		}
	}

	int set(int index, int value)
	{
		while (Arrayptr != nullptr)
		{
		if (index >= capacity)
			{
				
			}
		}
	}

private:
	T_ * Arrayptr = nullptr;

	int capacity = 0;

};


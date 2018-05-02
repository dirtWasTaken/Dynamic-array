#include "DynamicArray.h"





DynamicArray::DynamicArray()
{
}


DynamicArray::~DynamicArray()
{
}

void DynamicArray::dynamic()
{
	const unsigned int arrayValue = 10;

	int myArray[arrayValue];

	for (size_t i = 0; i < arrayValue; i++)
	{
		myArray[i] = rand() % 200 + 1;
		std::cout << myArray[i] << "\n";
	}
}


#include "DynamicArray.h"


int main()
{
	DynamicArray<int> dyn;

	dyn.dynamic();

	dyn.set(0, 0);

	dyn.arrayAllocation();

	system("pause");
}
#include "DynamicArray.h"


int main()
{
	DynamicArray<int> dyn;

	dyn.dynamic();

	int valuePass = 0;
	int indexPass = 0;

	dyn.set(valuePass, indexPass);
	

	dyn.arrayAllocation(valuePass, indexPass);

	system("pause");
}
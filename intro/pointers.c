#include <stdio.h>


void printVal(int n){
	printf("%d\n", n);
	printf("%p\n", &n);
}

void printValPrt(int* nP){
	printf("%p\n", nP);
	printf("%d", *nP);

}

int main(int argc, char const *argv[])
{
	/*
	// Declaring a pointer
	int numA = 10;
	int* numAPtr = &numA;
	int numB = 5;
	int* numBPtr = &numB;
	printVal(num);
	printValPrt(numPtr);

	// Reassigning the value
	*numAPtr = 20;
	printf("%p\n", numPtrPtrPtr);
	printf("%p\n", *numPtrPtrPtr);
	printf("%p\n", **numPtrPtrPtr);
	printf("%d", ***numPtrPtrPtr);

	//Using pointers
	int nomSum = numA + numB;
	int ptrSum = *numAPtr + *numBPtr;
	printf("%d %d", nomSum, ptrSum);

	// Pointer to pointer
	int** numAPtrPtr = &numAPtr;
	int*** numAPtrPtrPtr = &numAPtrPtr;
	// Arrays and Pointers
	int numArray[] = {1, 20, 3, 4, 5};
	int* numArrayPtr = numArray;

	printf("%d", *(numArray + 3));
	for (size_t i = 0; i < sizeof(numArray) / sizeof(int); i++)
	{
		printf("%d\n", *(numArrayPtr + i));
	}
	*/
	return 0;
}

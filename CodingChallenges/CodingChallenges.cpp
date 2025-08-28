#include <iostream>
#include "MissingInArray.h"

using namespace std;

int main()
{
	int arr[] = { 1 };
	int num = MissingInArray::missingNum(arr, 1);
	cout << "Missing number is: " << num << endl;
}

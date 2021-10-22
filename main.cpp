#include <iostream>
#include <array>

using namespace std;

//declare variables here
int sumDirect = 0;
int& sumRef = sumDirect;

//declare arrays here
array<int, 5> myArray = { 2,4,6,8,10 };

//declare functions here
int sumArray(int arrayInt, int sumRef);

int main()

{
	int sumArray(int arrayInt, int sumRef);		//call the function
	
	int byRef = sumArray(1, sumRef);
	cout <<"The result by Reference is: " << byRef << endl;

	int byDir = sumArray(1, sumDirect);
	cout << "The Direct result is: " << byDir << endl;
	return 0;
}

//place functions here
int sumArray(int arrayInt, int sumRef)			//iterate through the array and sum its contents
{
	for (int i = 0; i < myArray.size(); i++)
	{
		sumRef += myArray[i];					//send sum to reference variable
	}

	return sumRef;
}

//this is the overloaded function
int sumArray(double a, int sumDir)				//iterate through the array and sum its contents
{
	for (int i = 0; i < myArray.size(); i++)
	{
		sumDir += myArray[i];					//send the sum to direct variable 
	}

	return sumDir;
}


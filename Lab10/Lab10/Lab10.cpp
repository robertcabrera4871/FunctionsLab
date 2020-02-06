#include <iostream>
using namespace std;

void viewArray(int exampleArray[], int sizeOfArray);

int main()
{
	int myScores[5] = { 90, 95, 100, 99, 96 };
	viewArray(myScores, 5);
}

void viewArray(int exampleArray[], int sizeOfArray)
{
	for (int z = 0; z < sizeOfArray; z++) {
		cout << "These are the contents of this array =>> " << exampleArray[z] << endl;
	}
}

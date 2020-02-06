#include <iostream>
using namespace std;
void myDisplay(void);
void myNewMessage(int countDisplay);
void myDisplay(void) {
	cout << "This is a simple program" << endl;
}
void myNewMessage(int countDisplay) {
	while (countDisplay > 0) {
		myDisplay();
		countDisplay--;
	}
}
int main()
{
	int myValue;
	cout << "Please enter the number of time to display message: ";
	cin >> myValue;
	myNewMessage(1 + myValue);

	return 0;
}
#include <iostream>
using namespace std;
void callByValue(int x);
void callByReference(int *y);

int main()
{
	int x = 100;
	int y = 200;
	cout << "\n\nThis is the original value of x: " << x;
	cout << "\n\nThis is the original value of y: " << y;
	callByValue(x);
	callByReference(&y);
	cout << "\n\nThis is the current value of x: " << x;
	cout << "\n\nThis is the current value of y: " << y;
}
void callByValue(int x) {
	x = 600;
}
void callByReference(int *y) {
	*y = 700;
}

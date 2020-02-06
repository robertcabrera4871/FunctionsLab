
#include <iostream>
using namespace std;

float returnCelciusFromFarenheit(float fhValue) {
	return ((fhValue - 32.0) * 5.0) / 9.0;
}

void testCoversion(float fhValue) {
	cout << "Farenheit " << fhValue << " corresponds to " <<
	returnCelciusFromFarenheit(fhValue) << " Celcius" << endl;
}
int main()
{
	float fhValue;
	cout << "Please enter Farenheit Temperature: ";
	cin >> fhValue;
	testCoversion(fhValue);
	return 0;
}

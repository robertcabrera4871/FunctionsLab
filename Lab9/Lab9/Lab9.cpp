#include <iostream>
using namespace std;

void displayMenuOptions() {
	cout << "1. Read Student Records \n";
	cout << "2. Input Student Records \n";
	cout << "3. Exit Application \n";
}
int goToChoice() {
	cout << "\nSelect from the menu choices:\n";
	int selectChoice;
	cin >> selectChoice;
	return selectChoice;
}
int main()
{
	displayMenuOptions();
	int optSelect = goToChoice();
	switch (optSelect)
	{
	case 1:
		cout << "\nRead Student Records\n";
		break;
	case 2:
		cout << "\nInput Student Records\n";
		break;
	case 3:
		cout << "3. Exit Application \n";
		break;
	default:
		cout << "\nSelect from the menu choices:\n";
	}
	return 0;
}


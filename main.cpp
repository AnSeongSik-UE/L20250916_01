#include <iostream>

using namespace std;

int main()
{
	int MaxStamina = 50;
	int Dodge = 10;

	int CurrentStamina = MaxStamina;
	CurrentStamina = CurrentStamina - Dodge;

	cout << CurrentStamina << endl;

	return 0;
}
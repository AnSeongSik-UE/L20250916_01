#include <iostream>

using namespace std;

int main()
{
	int PlayerMaxStamina = 50;
	int PlayerDodge = 10;
	int PlayerAttack = 20;
	int PlayerStaminaRecovery = 10;

	int PlayerCurrentStamina = PlayerMaxStamina;
	PlayerCurrentStamina = PlayerCurrentStamina - PlayerDodge;
	PlayerCurrentStamina = PlayerCurrentStamina + PlayerStaminaRecovery;
	PlayerCurrentStamina = PlayerCurrentStamina - PlayerAttack;
	PlayerCurrentStamina = PlayerCurrentStamina + PlayerStaminaRecovery;

	cout << PlayerCurrentStamina << endl;

	return 0;
}
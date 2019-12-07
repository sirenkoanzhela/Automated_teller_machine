#include <iostream>
#include "Teller_Machine.h"
#include "Account.h"

int main()
{
	TellerMachine* tellerMachine = new TellerMachine;
	tellerMachine->interfaceMachine();
	return 0;
}
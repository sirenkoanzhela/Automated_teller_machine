#include <iostream>
#include "Teller_Machine.h"
#include "Account.h"

int main()
{
	Account* a1 = new Account("John","Smith",123456,1);
	a1->printCardNumber();
	return 0;
}
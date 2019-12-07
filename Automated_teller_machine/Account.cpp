#include "Account.h"
#include <time.h>

Account::Account()
{
	name = "";
	surname = "";
	cardNumber = "";
	password = 0;
	ID = 0;
	amount = 0;
}

Account::Account(std::string _name, std::string _surname, int _password, int _ID) : name(_name), surname(_surname), password(_password), ID(_ID), amount(0) 
{
	cardNumber = createCardNumber();
}

std::string Account::createCardNumber()
{
	srand(time(0));
	int randomise = 0;
	std::string partNumber;
	std::string complexNumber;
	for (int i = 0; i < 4; i++) {
		randomise = rand() % 9999 + 1111;
		partNumber = std::to_string(randomise);
		complexNumber += partNumber;
	}
	return complexNumber;
}

bool Account::changeAmountCapacity(int WithdrowalRequest)
{
	if (amount - WithdrowalRequest < 0)
	{
		return false;
	}
	amount - +WithdrowalRequest;
	return true;
}

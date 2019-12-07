#include "Teller_Machine.h"
#include "Account.h"

void TellerMachine::interfaceMachine()
{
	std::string checkCard;
	std::cout << "Enter your card" << std::endl;
	std::cin >> checkCard;
}

bool TellerMachine::checkWithdrawalLimit(float WithdrowalRequest)
{
	if ((WithdrowalRequest > maxCashWithdrawal)||(WithdrowalRequest<minCashWithdrawal))
	{
		return false;
	}
	return true;
}

bool TellerMachine::checkAvailableAmount(float WithdrowalRequest)
{
	if (WithdrowalRequest > currentFiling)
	{
		return false;
	}
	return true;
}

bool TellerMachine::checkAccountExistence(std::string cardNumber)
{
	for (it = listAccounts.begin(); it != listAccounts.end(); it++)
	{
		*it.->pr
	}
	return false;
}

void TellerMachine::sumCash(float WithdrowalRequest)
{
	currentFiling += WithdrowalRequest;
}

void TellerMachine::createAccount(std::string _name, std::string _surname, int _password)
{
	counterAccounts++;
	Account* account = new Account(_name,_surname,_password,counterAccounts);
	listAccounts.push_back(account);
}

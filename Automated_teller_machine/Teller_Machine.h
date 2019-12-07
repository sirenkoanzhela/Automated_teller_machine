#pragma once
#include <list>
#include <string>
#include "Account.h"

class TellerMachine
{
	const float minCashWithdrawal;
	const float maxCashWithdrawal;
	const float generalCapacity;
	float currentFiling;
	std::list<Account*> listAccounts;
	std::list<Account*>::iterator it;
	int counterAccounts;
	Account* currentAccount;

public:
	TellerMachine() :minCashWithdrawal(10), maxCashWithdrawal(1000), generalCapacity(500000), currentFiling(0), counterAccounts(0), currentAccount(nullptr)
	{
		listAccounts.empty();
	}
	void interfaceMachine();
private:
	bool checkWithdrawalLimit(float WithdrowalRequest);
	bool checkAvailableAmount(float WithdrowalRequest);
	bool checkAccountExistence(std::string cardNumber);
	void sumCash(float WithdrowalRequest);
	void createAccount(std::string _name, std::string _surname, int _password);
};
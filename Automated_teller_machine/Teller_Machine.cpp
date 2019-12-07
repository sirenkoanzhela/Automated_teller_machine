#include "Teller_Machine.h"
#include "Account.h"

void TellerMachine::interfaceMachine()
{
	std::string checkCard;
	std::cout << "Enter your card" << std::endl;
	std::cin >> checkCard;
	if (checkAccountExistence(checkCard))
	{
		short selectAction = 0;
		system("cls");
		std::cout << "Select the operation you want to do:" << std::endl;
		std::cout << "1.Cash Withdrowal" << std::endl;
		std::cout << "2.View your account balance" << std::endl;
		std::cout << "3.Change password" << std::endl;
		std::cout << "4.Exit" << std::endl;
		std::cin >> selectAction;
		switch (selectAction)
		{
		case 1:
		{
			while (true)
			{
				float WithdrowalRequest = 0;
				std::cout << "Enter withdrowal sum" << std::endl;
				std::cin >> WithdrowalRequest;
				if (checkAvailableAmount(WithdrowalRequest)) {
					if (checkWithdrawalLimit(WithdrowalRequest)) {
						if (currentAccount->getAmount() >= WithdrowalRequest) {
							Withdrowal(WithdrowalRequest);
							std::cout << "Get your cash!\nDon't forget your card in the teller-machine!" << std::endl;
							break;
						}
						std::cout << "Sorry, your request is too big or small! Enter another withdrowal request" << std::endl;
					}
					std::cout << "Sorry, the Teller-Machin don't have enough cash! Enter another withdrowal request" << std::endl;
				}
			}
		}
		case 2:
		{
			std::cout << "Your amount is: " << currentAccount->getAmount() << std::endl;
			break;
		}
		case 3:
		{
			int newPassword = 0;
			std::cout << "Enter your new password:" << std::endl;
			std::cin >> newPassword;
			currentAccount->setNewPassword(newPassword);
			break;
		}
		case 4: {
			exit(0);
		}
		}
	}
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
	if (counterAccounts == 0) { return 0; }
	for (it = listAccounts.begin(); it != listAccounts.end(); it++)
	{
		if ((*it)->getCardNumber() == cardNumber)
		{
			currentAccount = *it;
			return true;
		}
	}
	return false;
}

void TellerMachine::Withdrowal(float WithdrowalRequest)
{
	currentFiling += WithdrowalRequest;
}

void TellerMachine::createAccount(std::string _name, std::string _surname, int _password)
{
	counterAccounts++;
	Account* account = new Account(_name,_surname,_password,counterAccounts);
	listAccounts.push_back(account);
}

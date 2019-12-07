#pragma once
#include <iostream>
#include <string>

class Account {
	std::string name;
	std::string surname;
	std::string cardNumber;  //16 - digit value
	int password; //4 - digit value
	int ID;
	float amount;
public:
	Account();
	Account(std::string _name, std::string _surname, int _password, int _ID);
	bool changeAmountCapacity(int WithdrowalRequest);
	std::string getCardNumber()
	{
		return cardNumber;
	}
	float getAmount()
	{
		return amount;
	}
	void setNewPassword(int _password)
	{
		password = _password;
	}
	void printCardNumber()
	{
		std::cout << cardNumber << std::endl;
	}
private:
	std::string createCardNumber();
};
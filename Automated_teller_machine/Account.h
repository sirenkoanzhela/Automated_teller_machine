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
	std::string createCardNumber();
	bool changeAmountCapacity(int WithdrowalRequest);
	void printCardNumber()
	{
		std::cout << cardNumber << std::endl;
	}
};
#pragma once
#include <string>

class Account {
	std::string name;
	std::string surname;
	int cardNumber;  //16 - digit value
	int password; //4 - digit value
	int ID;
	float amount;
public:
	Account(std::string _name, std::string _surname, int _password,int _ID): name(_name),surname(_surname), password(_password), ID(_ID), amount(0){}
};
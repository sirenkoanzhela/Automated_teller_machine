#pragma once
#include "Account.h"
#include <iostream>

class Account_premium : public Account
{
	float bonusAccrualRate;
public:
	Account_premium() :Account(), bonusAccrualRate(0) {}
	Account_premium(std::string _name, std::string _surname, int _password, int _ID) :Account(_name, _surname, _password, _ID), bonusAccrualRate(1.5) {}
};
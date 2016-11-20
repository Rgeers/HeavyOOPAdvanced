#pragma once
#include "Transaction.h"
class BankAccount
{
public:
	BankAccount(int saldo, string name, int numberOfTransactions);

	const string & getName() const;
	int getSaldo() const;
	int getNumberOfTransactions() const;
	BankAccount operator+(const Transaction& transaction) const;

private:
	int saldo;
	string name;
	int numberOfTransactions;
	
};


#include "BankAccount.h"
#include <string>
using namespace std;

BankAccount::BankAccount(int saldo, string name, int numberOfTransactions) {
	this->saldo = saldo;
	this->name = name;
	this->numberOfTransactions = numberOfTransactions;
}

const string& BankAccount::getName() const {
	return name;
}

int BankAccount::getSaldo() const {
	return saldo;
}

int BankAccount::getNumberOfTransactions() const {
	return numberOfTransactions;
}

BankAccount BankAccount::operator+(const Transaction& transaction) const {
	return BankAccount(saldo, name, numberOfTransactions + 1);
}
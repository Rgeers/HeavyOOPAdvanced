#include "Transaction.h"
#include <string>
using namespace std;

Transaction::Transaction(bool type, int amount, string date) {
	this->type = type;
	this->amount = amount;
	this->date = date;
}

bool Transaction::getType() const {
	return type;
}

int Transaction::getAmount() const {
	return amount;
}

string Transaction::getDate() const {
	return date;
}

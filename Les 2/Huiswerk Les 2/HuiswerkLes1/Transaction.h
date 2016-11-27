#pragma once
#include <string>
using namespace std;
class Transaction {
public:
	Transaction(bool type, int amount, string date);
	bool getType() const;
	int getAmount() const;
	string getDate() const;

private:
	bool type;
	///true is up, false is down
	int amount;
	string date;
};


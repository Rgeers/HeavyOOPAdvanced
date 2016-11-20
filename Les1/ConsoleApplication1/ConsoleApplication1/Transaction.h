#pragma once
#include <string>
using namespace std;
class Transaction
{
public:
	Transaction(bool type, int amount, string date);
	bool getType();
	int getAmount();
	string getDate();

private:
	bool type;
	int amount;
	string date;
};


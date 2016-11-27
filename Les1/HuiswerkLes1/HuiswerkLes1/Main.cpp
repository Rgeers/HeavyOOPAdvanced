#include <iostream>
#include "BankAccount.h"
#include "Transaction.h"
#include "Config.h"
#include "Main.h"

int main() {

	BankAccount account = BankAccount(0, "My saldo", 0);
	Transaction transaction1 = Transaction(true, 9001, "07-03-1993");

	//cout << account.getName() << " MONEY = " << account.getSaldo() << endl;
	//account = account + transaction1;
	//cout << account.getName() << " MONEY = " << account.getSaldo() << endl;
	//account.TransactionHistory();

	
	Config bankAccount = Config("SimpleConfig");
	bankAccount.put("key1", "value1");
	bankAccount.put("key2", "value2");

	//cout << config["key1"] << endl;
	//cout << config["key2"] << endl;
	//cout << config["key3"] << endl;
	//cout << config << endl;
	cout << bankAccount << endl;
	string input;
	cin >> input;

	
	return 0;
}
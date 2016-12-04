#include <iostream>
#include "BankAccount.h"
#include "Transaction.h"
#include "Config.h"

int main() {
	string transactionHistory;
	Config bankAccount = Config("SimpleConfig");
	BankAccount account = BankAccount(0, "My saldo", 0);
	Transaction transaction1 = Transaction(true, 9001, "07-03-1993");


	


	cout << account.getName() << " MONEY = " << account.getSaldo() << endl;
	account = account + transaction1;
	cout << account.getName() << " MONEY = " << account.getSaldo() << endl;
	account.TransactionHistory();

	std::string saldo = std::to_string(account.getSaldo());
	transactionHistory = "Number of transactions: " + account.getNumberOfTransactions();
	
	bankAccount.put("key1", saldo);
	bankAccount.put("key2", transactionHistory);

	cout << bankAccount << endl;
	string input;
	cin >> input;

	
	return 0;
}
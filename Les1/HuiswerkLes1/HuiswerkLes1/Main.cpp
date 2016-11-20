#include <iostream>
#include "BankAccount.h"
#include "Transaction.h"

int main() {

	BankAccount account = BankAccount(0, "My saldo", 0);
	Transaction transaction1 = Transaction(true, 9001, "07-03-1993");

	cout << account.getName() << " MONEY = " << account.getSaldo() << endl;
	account = account + transaction1;
	cout << account.getName() << " MONEY = " << account.getSaldo() << endl;
	account.TransactionHistory();
	
	string input;
	cin >> input;
	return 0;
}
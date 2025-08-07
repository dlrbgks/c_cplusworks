//day21-5
#include"BankAccount.h"
#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<BankAccount> accounts;

	accounts.push_back(BankAccount(1001, "이우주"));
	accounts.push_back(BankAccount(1002, "정은하"));
	accounts.push_back(BankAccount(1003, "한강", 100000));

	accounts[0].deposit(10000);
	accounts[1].deposit(30000);

	accounts[1].withdraw(20000);
	accounts[1].withdraw(50000);

	for (BankAccount account : accounts) {
		account.displayInfo();
		account.getTransactionHistory();
	}

	system("pause");

	return 0;
}
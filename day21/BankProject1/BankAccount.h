//day21-3
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include<string>
#include<vector>
using namespace std;

//�ŷ����� - enum ��� �ڷ���
enum TransactionType
{
	�Ա�, ���
};

//�ŷ� ����ü
struct Transaction
{
	TransactionType type;
	int amount;

	Transaction(TransactionType type, int amount);
};

class BankAccount
{
public:
	BankAccount(int accountNumber, string owner, int balance = 0);
	void deposit(int amount);
	void withdraw(int amount);
	void displayInfo();
	void getTransactionHistory();

	

private:
	int accountNumber;
	string owner;
	int balance;
	vector<Transaction> Transactions;

	void addTransaction(TransactionType type, int amount);
};

#endif // !BANKACCOUNT_H
//day21-4
#include"BankAccount.h"
#include<iostream>
using namespace std;

Transaction::Transaction(TransactionType type, int amount): 
	type(type), amount(amount) {}

BankAccount::BankAccount(int accountNumber, string owner, int balance) :
	accountNumber(accountNumber), owner(owner), balance(balance) {}

void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else {
		balance += amount;
		cout << amount << "���� ���� �ԱݵǾ����ϴ�." << endl << "���� �ܾ� : " << balance << "��" << endl;
		//addTransaction(TransactionType::�Ա�, amount);
		addTransaction(�Ա�, amount);
	}
}

void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else if (amount > balance) {
		cout << "�ܾ��� �����մϴ�.\n";
	}
	else {
		balance -= amount;
		cout << amount << "���� ���� ��ݵǾ����ϴ�." << endl << "���� �ܾ� : " << balance << "��" << endl;
		//addTransaction(TransactionType::���, amount);
		addTransaction(���, amount);
	}
}

void BankAccount::displayInfo() {
	cout << endl << "[���� ����]" << endl;
	cout << "���� ��ȣ : " << accountNumber << endl;
	cout << "������ : " << owner << endl;
	cout << "���� �ܰ� : " << balance << endl;
	cout << "-------------------------------------" << endl;
}

void BankAccount::addTransaction(TransactionType type, int amount) {
	Transaction transaction(type, amount);
	Transactions.push_back(transaction);
}

void BankAccount::getTransactionHistory() {
	cout << "[" << owner << "] ���� �ŷ� ���� (�ֱ� " << Transactions.size() << "��" << endl;

	if (Transactions.empty()) {
		cout << "�ŷ� ������ �����ϴ�." << endl;
		return;
	}

	for (Transaction& transaction : Transactions) {
		cout << " |" << (transaction.type == �Ա� ? "�Ա�" : "���");
		cout << " |" << transaction.amount << "��" << endl;
	}
}







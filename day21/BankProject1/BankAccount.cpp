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
		cout << "유효한 금액을 입력하세요.\n";
	}
	else {
		balance += amount;
		cout << amount << "원이 정상 입금되었습니다." << endl << "현재 잔액 : " << balance << "원" << endl;
		//addTransaction(TransactionType::입금, amount);
		addTransaction(입금, amount);
	}
}

void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else if (amount > balance) {
		cout << "잔액이 부족합니다.\n";
	}
	else {
		balance -= amount;
		cout << amount << "원이 정상 출금되었습니다." << endl << "현재 잔액 : " << balance << "원" << endl;
		//addTransaction(TransactionType::출금, amount);
		addTransaction(출금, amount);
	}
}

void BankAccount::displayInfo() {
	cout << endl << "[계좌 정보]" << endl;
	cout << "계좌 번호 : " << accountNumber << endl;
	cout << "예금주 : " << owner << endl;
	cout << "현재 잔고 : " << balance << endl;
	cout << "-------------------------------------" << endl;
}

void BankAccount::addTransaction(TransactionType type, int amount) {
	Transaction transaction(type, amount);
	Transactions.push_back(transaction);
}

void BankAccount::getTransactionHistory() {
	cout << "[" << owner << "] 계좌 거래 내역 (최근 " << Transactions.size() << "건" << endl;

	if (Transactions.empty()) {
		cout << "거래 내역이 없습니다." << endl;
		return;
	}

	for (Transaction& transaction : Transactions) {
		cout << " |" << (transaction.type == 입금 ? "입금" : "출금");
		cout << " |" << transaction.amount << "원" << endl;
	}
}







#include<iostream>
#include<vector>
#include"BankAccount.h"
using namespace std;

vector<BankAccount> accounts;
int nextAccountNumber = 1000;

void createAccount() {
	string name;
	cin.ignore();
	cout << "계좌주를 입력하세요 : ";
	getline(cin, name);

	BankAccount newAccount(nextAccountNumber, name);
	accounts.push_back(newAccount);
	cout << "계좌가 성공적으로 생성되었습니다.(계좌번호 : " << nextAccountNumber++ << ")" << endl;
}

BankAccount* searchAccount(int accNum) {
	for (auto& account : accounts) {
		if (account.getAccountNumber() == accNum) {
			return &account;
		}
	}
	return nullptr;
}

void deposit() {
	int accNum;
	int amount;

	cout << "입금할 계좌번호를 입력하세요 : ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "입금할 금액을 입력하세요 : ";
		cin >> amount;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "숫자를 입력하세요.\n";
			return;
		}
		account->deposit(amount);
	}
	else {
		cout << "계좌번호를 찾을 수 없습니다.\n";
	}
}

void withdraw() {
	int accNum;
	int amount;

	cout << "출금할 계좌번호를 입력하세요 : ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "출금할 금액을 입력하세요 : ";
		cin >> amount;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "숫자를 입력하세요.\n";
			return;
		}
		account->withdraw(amount);
	}
	else {
		cout << "계좌번호를 찾을 수 없습니다.\n";
	}
}

void displayAccount() {
	int accNum;
	int amount;

	cout << "조회할 계좌번호를 입력하세요 : ";
	cin >> accNum;
	BankAccount* account = searchAccount(accNum);
	if (account) {
		account->displayInfo();
		account->getTransactionHistory();
	}
	else {
		cout << "계좌번호를 찾을 수 없습니다.\n";
	}
}


int main() {

	bool run = true;
	int choice;

	while (run) {
		cout << "=====================================================" << endl;
		cout << "1.계좌 생성 | 2.예금 | 3.출금 | 4.계좌 검색 | 5.종료\n";
		cout << "=====================================================" << endl;
		cout << "선택> ";
		cin >> choice;
		switch (choice) {
		case 1:
			createAccount();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdraw();
			break;
		case 4:
			displayAccount();
			break;
		case 5:
			cout << "프로그램을 종료합니다." << endl;
			run = false;
			break;
		default:
			cout << "지원하지 않는 기능입니다. 다시 입력하세요" << endl;
			break;
		}
	}


	system("pause");

	return 0;
}
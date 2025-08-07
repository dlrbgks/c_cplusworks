#include<iostream>
#include<vector>
#include"BankAccount.h"
using namespace std;

vector<BankAccount> accounts;
int nextAccountNumber = 1000;

void createAccount() {
	string name;
	cin.ignore();
	cout << "�����ָ� �Է��ϼ��� : ";
	getline(cin, name);

	BankAccount newAccount(nextAccountNumber, name);
	accounts.push_back(newAccount);
	cout << "���°� ���������� �����Ǿ����ϴ�.(���¹�ȣ : " << nextAccountNumber++ << ")" << endl;
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

	cout << "�Ա��� ���¹�ȣ�� �Է��ϼ��� : ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "�Ա��� �ݾ��� �Է��ϼ��� : ";
		cin >> amount;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "���ڸ� �Է��ϼ���.\n";
			return;
		}
		account->deposit(amount);
	}
	else {
		cout << "���¹�ȣ�� ã�� �� �����ϴ�.\n";
	}
}

void withdraw() {
	int accNum;
	int amount;

	cout << "����� ���¹�ȣ�� �Է��ϼ��� : ";
	cin >> accNum;

	BankAccount* account = searchAccount(accNum);
	if (account) {
		cout << "����� �ݾ��� �Է��ϼ��� : ";
		cin >> amount;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "���ڸ� �Է��ϼ���.\n";
			return;
		}
		account->withdraw(amount);
	}
	else {
		cout << "���¹�ȣ�� ã�� �� �����ϴ�.\n";
	}
}

void displayAccount() {
	int accNum;
	int amount;

	cout << "��ȸ�� ���¹�ȣ�� �Է��ϼ��� : ";
	cin >> accNum;
	BankAccount* account = searchAccount(accNum);
	if (account) {
		account->displayInfo();
		account->getTransactionHistory();
	}
	else {
		cout << "���¹�ȣ�� ã�� �� �����ϴ�.\n";
	}
}


int main() {

	bool run = true;
	int choice;

	while (run) {
		cout << "=====================================================" << endl;
		cout << "1.���� ���� | 2.���� | 3.��� | 4.���� �˻� | 5.����\n";
		cout << "=====================================================" << endl;
		cout << "����> ";
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
			cout << "���α׷��� �����մϴ�." << endl;
			run = false;
			break;
		default:
			cout << "�������� �ʴ� ����Դϴ�. �ٽ� �Է��ϼ���" << endl;
			break;
		}
	}


	system("pause");

	return 0;
}
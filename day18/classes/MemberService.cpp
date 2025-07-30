//day18-1
#include<iostream>
using namespace std;

class MemberService
{
public:
	MemberService();
	~MemberService();

	bool logIn(string id, string password);
	void logOut();

private:

};

MemberService::MemberService()
{
}

MemberService::~MemberService()
{
}

bool MemberService::logIn(string id, string password) {
	if (id.compare("hangang") == 0 && password.compare("k1234") == 0) {
		return true;
	}
}

void MemberService::logOut() {
	cout << "Log out!" << endl;
}



int main() {
	cout << "Enter id : ";
	string id, password;
	cin >> id;
	cout << "Enter password : ";
	cin >> password;

	MemberService ms;


	if (ms.logIn(id, password) != 1) {
		cout << "Login fail!" << endl;
	}
	else {
		cout << "Login success" << endl;
		ms.logOut();
	}


	return 0;
}
//day17-9
#include<iostream>
using namespace std;

//멤버 클래스 정의
class Member
{
public:
	Member(string id, string password);
	~Member();
	void memberInfo();
private:
	string id;
	string password;
};

Member::Member(string id, string password)
{
	this->id = id;
	this->password = password;
}

Member::~Member()
{
}

void Member::memberInfo() {
	cout << "id : " << id << ", password : " << password << endl;
}

int main() {
	Member memberList[3] = {
		Member("flower","f1234"),
		Member("tree","t1234"),
		Member("bird","b1234")
	};
	cout << "********Member list********" << endl;
	for (int i = 0; i < 3; i++) {
		memberList[i].memberInfo();
	}





	return 0;
}
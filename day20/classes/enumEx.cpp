//day20-11
#include<iostream>
using namespace std;

enum MEDAL
{
	GOLD = 1,
	SILVER = 2,
	BRONZE = 3
};

int main() {
	/*
	enum MEDAL medal;
	medal = SILVER;
	cout << medal << endl;
	*/
	int medal;
	cout << "Enter medal(input 1~3) : ";
	cin >> medal;
	switch (medal)
	{
	case GOLD:
		cout << "Gold Medal!" << endl;
		break;
	case SILVER:
		cout << "Silver Medal!" << endl;
		break;
	case BRONZE:
		cout << "Bronze Medal!" << endl;
		break;
	default:
		cout << "No Medal." << endl;
	}






	return 0;
}
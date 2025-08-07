//day24-4
#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<string> carts;
	carts.push_back("라면");
	carts.push_back("생수");
	carts.push_back("화장지");
	carts.push_back("계란");

	cout << "*** carts 리스트 출력 ***" << endl;
	for (auto cart : carts) {
		cout << cart << " ";
	}
	cout << endl;
	cout << "========================" << endl;
	cout << "1. \'생수\'를 \'쌀\'로 변경" << endl;
	carts.at(1) = "쌀";

	cout << "2. \'화장지\'를 삭제" << endl;

	vector<string>::iterator it = carts.begin();

	for (it = carts.begin(); it != carts.end(); it++) {
		if (*it == "화장지") {
			carts.erase(it);
			break;
		}
	}
	
	cout << "========================" << endl;
	cout << "*** carts 리스트 출력 ***" << endl;
	for (auto cart : carts) {
		cout << cart << " ";
	}





	return 0;
}
//day23-4
#include<iostream>
#include<map>
using namespace std;

int main() {
	/*
		map - 키와 값의 쌍을 원소로 저장
			  검색할 경우 키를 이용
	*/

	map<string, int> dogs;
	dogs.insert({ "말티즈", 3 });
	dogs.insert({ "진돗개", 2 });
	dogs.insert({ "불독", 4 });

	cout << dogs.size() << endl;
	
	cout << dogs["말티즈"] << "세\n";
	cout << dogs.at("말티즈") << "세\n";
	map<string, int>::iterator it;
	for (it = dogs.begin(); it != dogs.end(); it++) {
		cout << it->first << ", " << it->second << endl;
	}


	dogs["불독"] = 1;
	for (auto dog : dogs) {
		cout << dog.first << ", " << dog.second << endl;
	}

	cout << "-------------------" << endl;
	dogs.erase("말티즈");
	for (auto dog : dogs) {
		cout << dog.first << ", " << dog.second << endl;
	}














	return 0;
}
//day23-5
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main() {
	map<string, string> dict;
	
	dict.insert({ "������", "��ǻ�Ͱ� ����ϴ� 0�� 1�� �̷���� ��" });
	dict.insert({ "��Ʈ","���� ������� �������� ���� ���� ������, 0 �Ǵ� 1�� ���� ������" });
	dict.insert({ "������", "���α׷��� ���� �ۼ��� �ҽ� �ڵ带 ��ǻ�Ͱ� �����ϰ� ���డ���� ����� ��ȯ�ϴ� ����" });
	
	cout << dict["��Ʈ"] << endl;
	
	auto it = dict.find("������");
	cout << it->first << " : " << it->second << endl;

	string eng;
	while (true) {
		cout << "�˻��� �ܾ� �Է�(exit - ����)>>";
		getline(cin, eng);
		if (eng == "exit") {
			break;
		}
		else if (dict.find(eng) == dict.end()) {
			cout << "ã�� �ܾ �����ϴ�" << endl;
		}
		else {
			cout << dict[eng] << endl;
		}
	}
	cout << "�˻��� �����մϴ�" << endl;





	return 0;
}
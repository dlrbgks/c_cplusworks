//day15-2
#include<iostream>
#include<ctime>
#include<thread>//������(���μ��� �۾�) this_thread::sleep_for()
using namespace std;
using namespace this_thread;

int main() {
	//����ð�
	time_t now = time(nullptr); //c��� - NULL
	cout << now << "��" << endl;
	cout << now / (24 * 60 * 60) << "��" << endl;
	cout << now / (365 * 24 * 60 * 60) << "��" << endl;
	/*
	//����ð� ����
	time_t start, end;
	//start = time(nullptr);
	time(&start);
	for (int i = 1; i <= 10;i++) {
		cout << i << endl;
		//<thread> ������� ����, 1sec = 1000ms
		sleep_for(chrono::milliseconds(500));
	}
	//end = time(nullptr);
	time(&end);
	cout << "Runtime : " << end - start << "sec" << endl;
	*/
	
	//����ð� ����(�Ǽ��� ����)
	time_t start, end;
	double elapsedTime;
	start = clock();
	for (int i = 1; i <= 10;i++) {
		cout << i << endl;
		//<thread> ������� ����, 1sec = 1000ms
		sleep_for(chrono::milliseconds(500));
	}
	end = clock();
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "Runtime : " << elapsedTime << "sec" << endl;


	return 0;
}
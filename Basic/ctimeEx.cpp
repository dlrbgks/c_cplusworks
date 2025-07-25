//day15-2
#include<iostream>
#include<ctime>
#include<thread>//쓰레드(프로세스 작업) this_thread::sleep_for()
using namespace std;
using namespace this_thread;

int main() {
	//현재시간
	time_t now = time(nullptr); //c언어 - NULL
	cout << now << "초" << endl;
	cout << now / (24 * 60 * 60) << "일" << endl;
	cout << now / (365 * 24 * 60 * 60) << "년" << endl;
	/*
	//수행시간 측정
	time_t start, end;
	//start = time(nullptr);
	time(&start);
	for (int i = 1; i <= 10;i++) {
		cout << i << endl;
		//<thread> 헤더파일 포함, 1sec = 1000ms
		sleep_for(chrono::milliseconds(500));
	}
	//end = time(nullptr);
	time(&end);
	cout << "Runtime : " << end - start << "sec" << endl;
	*/
	
	//수행시간 측정(실수로 측정)
	time_t start, end;
	double elapsedTime;
	start = clock();
	for (int i = 1; i <= 10;i++) {
		cout << i << endl;
		//<thread> 헤더파일 포함, 1sec = 1000ms
		sleep_for(chrono::milliseconds(500));
	}
	end = clock();
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "Runtime : " << elapsedTime << "sec" << endl;


	return 0;
}
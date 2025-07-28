//day16-2
#include<iostream>
using namespace std;
int main() {
	cout << "Enter data size : ";
	int* size = new int;
	cin >> *size;
	int* data = new int[*size];
	for (int i = 0; i < *size; i++) {
		cout << "Enter data " << i + 1 << " : ";
		cin >> data[i];
	}

	int* max = new int;
	float* avg = new float;
	int* sum = new int;
	*sum = 0;
	*max = data[0];

	for (int i = 0; i < *size;i++) {
		*sum += *(data + i);
	}
	for (int i = 1; i < *size; i++) {
		if (*max < *(data + i)) {
			*max = *(data + i);
		}
	}
	*avg = (float)*sum / *size;

	cout << "==================" << endl;
	cout << "Summary" << endl;
	cout << "Sum of data : " << *sum << endl;
	cout << fixed;
	cout.precision(1);//소수 첫째자리 설정
	cout << "Average of data : " << *avg << endl;
	cout << "Max of data : " << *max << endl;
	


	delete size, avg, sum, max;
	delete[] data;


	return 0;
}
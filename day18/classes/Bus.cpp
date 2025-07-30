//dayy18-13
#include"Bus.h"
#include<iostream>
using namespace std;
Bus::Bus(int busNumber, int FEE) : busNumber(busNumber), passenger(0), money(0), FEE(FEE) {

}
void Bus::take() {
	money += FEE;
	passenger++;
}
int Bus::getFEE() {
	return FEE;
}

void Bus::displayInfo() {
	cout << "Bus number : " << busNumber << endl << "Money : " << money << endl << "Passenger : " << passenger << endl << "Fee : " << FEE << endl;
}
#include <iostream>

using namespace std;

int main(){
	double V, S, t;
	int hours, minutes;
	cout << "Calculation of car driving time." << endl;
	cout << "Enter the source data:" << endl;
	cout << "Distance between settlements (verst) -> ";
	cin >> S;
	cout << "Vehicle speed (km / h) -> ";
	cin >> V;
	S = (S * 1066.8)/1000;
	t = S / V;
	hours = t;
	minutes = (t - hours) * 60;
	cout << "Vehicle travel " << hours << " hours " << minutes << " minutes" << " at a vehicle speed of " << V << " km / h";
	return 0;
}

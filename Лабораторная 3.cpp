#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int number;
	
	cout << "__Select statement__" << endl;
	cout << endl;
	
	cout << "Enter number: ";
	cin >> number;
	number = abs(number);
	number %= 10;
	switch (number){
		case 0: cout << 0;
			break;
		case 1: cout << 1;
			break;
		case 2: cout << 4;
			break;
		case 3: cout << 9;
			break;
		case 4: cout << 6;
			break;
		case 5: cout << 5;
			break;
		case 6: cout << 6;
			break;
		case 7: cout << 9;
			break;
		case 8: cout << 4;
			break;
		case 9: cout << 1;
			break;
	}
	cout << endl;
	
	cout << "__Conditional operator__" << endl;
	cout << endl;
	
	cout << "Enter number: ";
	cin >> number;
	number = abs(number);
	number %= 10;
	if (number == 0){
		cout << 0;
	}
	if (number == 1){
		cout << 1;
	}
	if (number == 2){
		cout << 4;
	}
	if (number == 3){
		cout << 9;
	}
	if (number == 4){
		cout << 6;
	}
	if (number == 5){
		cout << 5;
	}
	if (number == 6){
		cout << 6;
	}
	if (number == 7){
		cout << 9;
	}
	if (number == 8){
		cout << 4;
	}
	if (number == 9){
		cout << 1;
	}
	return 0;
}

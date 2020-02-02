#include <iostream>

using namespace std;

int main(){
	int a,b;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	if ((a == 90) || (b == 90)){
		cout << "Rectangular";
	}
	else{
		if ((a == b) && (a != 90) && (b != 90)){
			cout << "Isosceles";
		}
		else{
			if ((a == 90) && (b == 90)){
				cout << "Rectangle";
			}
			else{
				if ((a != 90) && (b != 90)){
					cout << "Type missing";
				}
			}
		}
	}
	return 0;	
}

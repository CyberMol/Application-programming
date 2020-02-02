#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n, n1, n2, n3;
	cout << "Enter a three digit number: ";
	cin >> n;
	n1 = n / 100;
	n2 = (n / 10) - (n1 * 10);
	n3 = n - ((n / 10) * 10);
	pow(n,2) == pow((n1 + n2 + n3),3)? cout << "True" : cout << "False";
	return 0;
}

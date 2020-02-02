#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double y,z,m,n;
	cout << "Enter m: ";
	cin >> m;
	cout << "Enter n: ";
	cin >> n;
	y = (((m-1)*sqrt(m))-((n-1)*sqrt(n)))/(sqrt((pow(m,3)*n))+(m*n)+pow(m,2)-m);
	z = (sqrt(m)-sqrt(n))/m;
	cout << "y="<<y<<endl;
	cout << "z="<<z<<endl;
	return 0;
}

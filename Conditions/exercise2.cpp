#include <iostream>

using namespace std;

int main() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	if(num1 == num2+num3){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}

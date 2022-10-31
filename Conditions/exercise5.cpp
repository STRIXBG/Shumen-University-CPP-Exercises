#include <iostream>

using namespace std;

int main() {
	int number;
	cin >> number;
	if(number / 10 < number % 10){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}

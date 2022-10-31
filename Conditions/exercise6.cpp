#include <iostream>

using namespace std;

int reverseNum(int number){
	int reversed = 0;
	int remainder = 0;
	while(number != 0){
		remainder = number % 10;
		reversed = (reversed * 10) + remainder;
		number /= 10;
	}
	return reversed;
}

int main() {
	int number;
	cin >> number;
	if(reverseNum(number) == number){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}

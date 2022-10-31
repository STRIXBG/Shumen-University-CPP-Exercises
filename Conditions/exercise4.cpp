#include <iostream>

using namespace std;

int main() {
	int price = 0, money;
	int input;
	for(int i=0; i<3; i++){
		cin >> input;
		price += input;
	}
	cin >> money;
	if(money >= price){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}

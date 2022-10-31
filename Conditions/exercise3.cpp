#include <iostream>

using namespace std;

int main() {
	int sidesMeters;
	int boughtMeters;
	int input;
	for(int i=0; i<4; i++){
		cin >> input;
		sidesMeters+=input;
	}
	cin >> boughtMeters;
	if(boughtMeters >= sidesMeters){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int input;
	int count;
	do{
		cin >> input;
		if(input > 78)
			count++;
	}while(input != 0);
	cout << count;
	return 0;
}

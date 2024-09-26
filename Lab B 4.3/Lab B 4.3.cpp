#include <iostream>
#include <string>

using namespace std;

int main() {
	int digits, num;

	cout << "Please enter integer.\n";
	cin >> num;

	if (num < 0) {
		num = num * -1;
	}
	if (num < 10) {
		digits = 1;
	}

	else if (num < 100) {
		digits = 2;
	}
	
	else if (num < 1000) {
		digits = 3;
	}

	else if (num < 10000) {
		digits = 4;
	}

	else if (num < 100000) {
		digits = 5;
	}

	else if (num < 1000000) {
		digits = 6;
	}

	cout << "This number has " << digits << " digits.\n";
}
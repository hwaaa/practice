#include <iostream>
#include <string>
using namespace std;

// À¯Çü1: len=13
// 2: len 11
// 3: 16

int main() {
	string phone_number;
	string temp1, temp2, temp3;

	cin >> phone_number;

	int cnt = 0;
	int len = phone_number.size();

	if (len != 11 && len != 13 && len != 16) {
		cout << "-1" << endl;
	}
	else {
		for (int i = 0; i < 4; i++) {
			temp1 += phone_number[i];
		}

		for (int i = 0; i < 3; i++) {
			temp2 += phone_number[i];
		}

		for (int i = 0; i < 7; i++) {
			temp3 += phone_number[i];
		}

		for (int i = 0; i < len; i++) {
			if (phone_number[i] == '-') {
				cnt += 1;
			}
		}

		if (temp1 == "010-" && phone_number[3] == '-' && phone_number[8] == '-' && cnt == 2) {
			cout << "1" << endl;
		}
		else if (temp2 == "010" && cnt == 0) {
			cout << "2" << endl;
		}
		else if (temp3 == "+82-10-" && phone_number[11] == '-' && cnt == 3) {
			cout << "3" << endl;
		}
		else {
			cout << "-1" << endl;
		}
	}
}
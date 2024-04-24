#pragma once

#include <iostream>
using namespace std;

class NumCheck {
public:
	int Number;

	void Check() {
		if (Number == 5) {
			cout << "The number is equal to 5. \n";
			return;
		}

		if (Number < 5) {
			cout << "The number is less than 5. \n";
			return;
		}

		if (Number > 5) {
			cout << "The number is more than 5. \n";
			return;
		}
	}

	void GetInput(int minValue, int maxValue) {
		cout << "==== Type a number between 1 and 10 ==== \n";
		cin >> Number;

		if (Number < minValue || Number > maxValue) {
			cout << "Invalid number, value must be between " << minValue << " and " << maxValue << "\n \n";

			GetInput(minValue, maxValue);
		}
	}
};
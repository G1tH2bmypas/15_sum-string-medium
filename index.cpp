#include <iostream>
#include <string>
#include <cmath>

int sumString(const std::string& str) {
	int num = 0;
	int negative = false;

	for (char ch: str) {
		if (ch == ',') {
			continue;
		}
		if ( ch == '-') {
			negative = true;
			continue;
		}

		int current = ch - 48;

		if (negative) {
			current *= -1;
			negative = false;
		}
		num += current;
	}
	return num;
}

/*
* Dang Thong Bu
* CSDP 250
* Prof Stone
* 4/9/25
*/

#include "Stack.h"
#include <iostream>
#include <iomanip>
#include <stack>
#include <string>

using namespace std;

Stack::Stack() {
	num = Unconverted;
}

Stack::Calc() {
	while (num > 0) {
		num /= 2;
		if ((num % 2) != 0)) {
			bin.push(1);
		}
		else {
			bin.push(0);
		}
	}

	while (bin.empty() == false) {
		container += bin.top;
		bin.pop();
	}
	ConvertedI = stod(container);
}

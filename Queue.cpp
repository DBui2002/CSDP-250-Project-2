#include "Queue.h"
#include <iostream>
#include <iomanip>
#include <queue>
#include <string>

using namespace std;

Queue::Queue() {
	sub = Unconverted;
	num = Unconverted - sub;
}

Queue::Calc() {
	for (int i = 0; i <= 8; i++) {
		num *= 2;
		if (num >= 1) {
			bin.push(1);
			num -= 1;
		}
		else {
			bin.push(0);
		}
	}

	while (bin.empty() == false) {
		container += bin.front();
		bin.pop();
	}
	ConvertedD = stod(container);
}
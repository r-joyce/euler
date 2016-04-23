#include <ostream>
#include <iostream>
// Sumation of even numbered fib. sequence numbers that do not exceed 4 million
int main(void)
{
	int sum = 0, x = 1, y = 2, temp;
	while (y < 4000000) {
		if (y % 2 == 0) { sum += y; }
		temp = x;
		x = y;
		y += temp;
	}
	std::cout << sum << std::endl;
	return 0;
}

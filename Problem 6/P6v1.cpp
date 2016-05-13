#include <iostream>
int main(void)
{
	int sum = 0, square = 0;
	for (int i = 1; i <= 100; i++) { square += i * i; }
	for (int i = 1; i <= 100; i++) { sum += i; }
	sum = sum * sum;
	std::cout << sum - square << std::endl;
	return 0;
}
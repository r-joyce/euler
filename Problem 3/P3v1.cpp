//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?
#include <iomanip>
#include <iostream>
#include <math.h>
int main(void)
{
	long long int n = 600851475143;
	while (n % 2 == 0) { n = n / 2; } // Remove the evens
	for (int i = 3; i <= sqrt(n); i = i + 2) { // Now we're working with odds
		while (n%i == 0) { n = n / i; }
	}
	std::cout << n << "\n";
	return 0;
}
int main(void)
{
	int x = 1;
	while (true) {
		int j = 0;
		for (int i = 1; i <= 20; i++) { (x % i == 0) ? j++ : j; }
		if (j == 20) { break; } // If j is ever 20, we found our number
		x++;
	}
	return 0;
}
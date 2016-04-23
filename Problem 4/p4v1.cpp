#include <string>
int main(void)
{
	int pali = -1;
	for (int i = 999; i > 99; i--)
	{
		for (int j = 999; j > 99; j--)
		{
			int mult = i * j;
			std::string s = std::to_string(mult);
			if (s[0] == s[5] &&
				s[1] == s[4] &&
				s[2] == s[3]) 
			{
				if (mult > pali) { pali = mult; }
			}
		}
	}
	return 0;
}
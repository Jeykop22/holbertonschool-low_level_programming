#include "main.h"

int _atoi(char *s)
{
	int sign = 1;
	unsigned int res= 0;
	int i = 0;

	while (!((s[i] >= '0' && s[i] <= '9') || s[i] == '-' || s[i] == '+'))
		i++;
	while (s[i] && s[i] >= '0' && s[i] <= '9')
	{
		if (s[i] == '-')
		{
			sign *= -1;
			i++;
		}
		res = res * 10 + s[i] - '0';
		i++;
	}
	sign *= res;
	return (sign);
}

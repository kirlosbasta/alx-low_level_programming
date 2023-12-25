#include <stdlib.h>

int rand(void);

int rand(void)
{
	static int calls = -1;

	calls++;
	if (calls == 0)
	{
		return (9);
	}
	else if (calls == 1)
	{
		return (8);
	}
	else if (calls == 2)
	{
		return (10);
	}
	else if (calls == 3)
	{
		return (24);
	}
	else if (calls == 4)
	{
		return (75);
	}
	else if (calls == 5)
	{
		return (9);
	}
	else
	{
		return (0);
	}
}

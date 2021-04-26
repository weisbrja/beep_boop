#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("Usage: tb text\n");
		return 1;
	}

	char first = 1;
	while (*argv[1])
	{
		for (int i = 7; i >= 0; --i)
		{
			if (!first)
				printf(" ");
			else
				first = 0;

			if (*argv[1] & 1 << i)
				printf("beep");
			else
				printf("boop");
		}
		++argv[1];
	}
	printf("\n");

	return 0;
}

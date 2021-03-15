#include <stdio.h>
int main()
{
	int side;
	scanf("%d", side);
	char paper[side][side];
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			paper[side][side] = '.';
		}
	}
	return 0;
}

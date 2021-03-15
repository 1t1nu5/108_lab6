#include <stdio.h>
int main()
{
	int people;
	scanf("%d", &people);
	int score[people], love[people][2];
	for (int i = 0; i < people; i++)
	{
		scanf("%d %d", &love[i][0], &love[i][1]);
	}
	return 0;
}

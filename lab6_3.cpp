#include <stdio.h>
int main()
{
	int people;
	scanf("%d", &people);
	int score[people] = {}, love[people][2];
	for (int i = 0; i < people; i++)
	{
		scanf("%d %d", &love[i][0], &love[i][1]);
		score[love[i][0]]++;
		score[love[i][i]]++;
	}
	int most = score[0], first = 0;
	for (int i = 1; i < people; i++)
	{
		if (most < score[i])
		{
			most = score[i];
			first = i;
		}
	}
	return 0;
}

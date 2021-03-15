#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ans[n], guess[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &ans[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &guess[i]);
	}
	int score = 0;
	for (int i = 0; i < n; i++)
	{
		if (ans[i] == guess[i])
		{
			score++;
		}
	}
	printf("%d %d", score+1, n-score-1);
	return 0;
}

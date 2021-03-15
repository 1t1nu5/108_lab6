#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ans[n+1], guess[n+1];
	scanf("%s", ans);
	scanf("%s", guess);
	int score = 0;
	for (int i = 0; i < n+1; i++)
	{
		if (ans[i] == guess[i])
		{
			score++;
		}
	}
	printf("%d %d", score+1, n-score-1);
	return 0;
}

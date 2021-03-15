#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ans[n], guess[n];
	scanf("%s", ans);
	scanf("%s", guess);
	int score = 0;
	for (int i = 0; i < n; i++)
	{
		if (ans[i] = guess[i])
		{
			score++;
		}
	}
	printf("%d %d", score, n-score);
	return 0;
}

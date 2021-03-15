#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d", &n);
	int ans[n], guess[n];
	scanf("%s", ans);
	scanf("%s", guess);
	for (int i = 0; i < n; i++)
	{
		ans[i] -= '0';
	}
	for (int i = 0; i < n; i++)
	{
		guess[i] -= '0';
	}
	
	return 0;
}

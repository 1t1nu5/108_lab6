#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d", &n);
	char item[1000][n];
	char swap[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", item[i]);
	}
	
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (strcmp(item[j]), item[j+1] < 0)
			{
				
			}
		}
	}
	return 0;
}

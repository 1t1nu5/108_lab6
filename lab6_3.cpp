#include <stdio.h>
int main()
{
	int N, Q;
	scanf("%d %d", &N, &Q);
	int a[N];
	char cmd;
	int ncmd[2];
	return 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%c %d %d", &cmd, &ncmd[0], &ncmd[1]);
		if (cmd == 'U')
		{
			a[ncmd[ncmd[0]-1]] = ncmd[1];
		}
		else
		{
			int most = a[ncmd[0]];
			for (int i = ncmd[0]+1; i <= ncmd[1]; i++)
			{
				if (most < a[i])
				{
					most = a[i];
				}
			}
			printf("%d", most);
		}
	}
}

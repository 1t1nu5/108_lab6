#include <stdio.h>
#include <string.h>
int main()
{
	int side, pos[2] = {0, 0}, last = 4; // y x
	scanf("%d", &side);
	char paper[side][side];
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			paper[i][j] = '.';
		}
	}
	char cmd[250] = {};
	scanf("%s", cmd);
	for (int i = 0; i < 250; i++)
	{
		if (last == 4)
		{
			switch (cmd[i])
			{
				case 'U':
				case 'D':
					paper[0][0] = '|';
					break;
				case 'R':
				case 'L':
					paper[0][0] = '-';
					break;
			}
		}
		switch (cmd[i])
		{
			case 'U':
				if (pos[0] > 0)
				{
					switch (paper[pos[0]-1][pos[1]])
					{
						case '.':
							paper[pos[0]-1][pos[1]] = '|';
							break;
						case '-':
							paper[pos[0]-1][pos[1]] = '+';
							break;
					}
				}
				switch (last)
				{
					case 1:
					case 3:
						paper[pos[0]][pos[1]] = '+';
						break;
				}
				pos[0]--;
				last = 0;
				break;
			case 'R':
				if (pos[1] < side-1)
				{
					switch (paper[pos[0]][pos[1]+1])
					{
						case '.':
							paper[pos[0]][pos[1]+1] = '-';
							break;
						case '|':
							paper[pos[0]][pos[1]+1] = '+';
							break;
					}
				}
				switch (last)
				{
					case 0:
					case 2:
						paper[pos[0]][pos[1]] = '+';
						break;
				}
				pos[1]++;
				last = 1;
				break;
			case 'D':
				if (pos[0] < side-1)
				{
					switch (paper[pos[0]+1][pos[1]])
					{
						case '.':
							paper[pos[0]+1][pos[1]] = '|';
							break;
						case '-':
							paper[pos[0]+1][pos[1]] = '+';
							break;
					}
				}
				switch (last)
				{
					case 1:
					case 3:
						paper[pos[0]][pos[1]] = '+';
						break;
				}
				pos[0]++;
				last = 2;
				break;
			case 'L':
				if (pos[1] > 0)
				{
					switch (paper[pos[0]-1][pos[1]])
					{
						case '.':
							paper[pos[0]-1][pos[1]] = '-';
							break;
						case '|':
							paper[pos[0]-1][pos[1]] = '+';
							break;
					}
				}
				switch (last)
				{
					case 0:
					case 2:
						paper[pos[0]][pos[1]] = '+';
						break;
				}
				pos[1]--;
				last = 3;
				break;
		}
		if ((pos[0] < 0 || pos[0] >= side) && (pos[1] < 0 || pos[1] >= side) || cmd[i+1] == NULL)
		{
			break;
		}
	}
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			printf("%c", paper[i][j]);
		}
		printf("\n");
	}
	return 0;
}

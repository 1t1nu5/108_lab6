#include <stdio.h>
#include <string.h>
int main()
{
	int side, pos[2] = {0, 0}; // y x
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
		switch (cmd[i])
		{
			case 'U':
				switch (paper[pos[0]][pos[1]])
				{
					case '.':
						paper[pos[0]][pos[1]] = '|';
						break;
					case '-':
						paper[pos[0]][pos[1]] = '+';
						break;
				}
				if (pos[0] > 0)
				{
					switch (paper[pos[0]][pos[1]])
					{
						case '.':
							paper[pos[0]][pos[1]] = '|';
							break;
						case '-':
							paper[pos[0]][pos[1]] = '+';
							break;
					}
				}
				pos[0]--;
				break;
			case 'R':
				switch (paper[pos[0]][pos[1]])
				{
					case '.':
						paper[pos[0]][pos[1]] = '-';
						break;
					case '|':
						paper[pos[0]][pos[1]] = '+';
						break;
				}
				pos[1]++;
				break;
			case 'D':
				switch (paper[pos[0]][pos[1]])
				{
					case '.':
						paper[pos[0]][pos[1]] = '|';
						break;
					case '-':
						paper[pos[0]][pos[1]] = '+';
						break;
				}
				pos[0]++;
				break;
			case 'L':
				switch (paper[pos[0]][pos[1]])
				{
					case '.':
						paper[pos[0]][pos[1]] = '-';
						break;
					case '|':
						paper[pos[0]][pos[1]] = '+';
						break;
				}
				pos[1]--;
				break;
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

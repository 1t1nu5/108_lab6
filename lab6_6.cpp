#include <stdio.h>
#include <string.h>
int main()
{
	int side, pos[2] = {0, 0};
	scanf("%d", side);
	char paper[side][side];
	for (int i = 0; i < side; i++)
	{
		for (int j = 0; j < side; j++)
		{
			paper[side][side] = '.';
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
				break;
			case 'R':
				break;
			case 'D':
				break;
			case 'L':
				break;
		}
	}
	return 0;
}

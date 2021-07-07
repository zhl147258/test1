#include<stdio.h>
void Judgment();
int main()
{
	Judgment();
	return 0;
}
void Judgment()
{
	int x, y;
	scanf("%d%d", &x, &y);
	if (x == 0 && y == 0)
	{
		printf("原点\n");
	}
	else if (x == 0)
	{
		printf("X轴\n");
	}
	else if (y == 0)
	{
		printf("Y轴\n");
	}
	else if (x > 0 && y > 0)
	{
		printf("第一象限\n");
	}
	else if (x < 0 && y > 0)
	{
		printf("第二象限\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("第三象限\n");
	}
	else if (x > 0 && y < 0)
	{
		printf("第四象限\n");
	}
}

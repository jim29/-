/*本次作业由本人独立实现完成，如有抄袭行为，愿承担由此带来的一切不良后果*/
#include <stdio.h>
#define maxn 15
int main()
{
	int n, c;
	scanf("%d", &n);
	int mat[maxn][maxn];
	int num;
	int j , i;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
	getchar();
	while ((c = getchar()) != '#')  {
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++) {
				scanf("%d", &num);
				if (c == '+') mat[i][j] += num;
				else mat[i][j] -= num;
				//printf("%d\n", mat[i][j]);
			}
		getchar();
	}


	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			printf("%5d", mat[i][j]);
		putchar('\n');
	}
	return 0;
}

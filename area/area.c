/*本次作业由本人独立实现完成，如有抄袭行为，愿承担由此带来的一切不良后果*/
/*【输入形式】
从标准输入读取两行以空格分隔的整数，格式如下：
Ax1 Ay1 Ax2 Ay2
Bx1 By1 Bx2 By2
其中（x1，y1）和（x2，y2）为矩形对角线上端点的坐标。各坐标值均为整数，取值在0至1000之间。
【输出形式】
向标准输出打印一个整数，是两矩形相交部分的面积（可能为0）。
【输入样例】
0 0 2 2
1 1 3 4
【输出样例】
1
*/
#include <stdio.h>
int MAX(int a, int b){
	if(a >= b) return a;
	return b;
}

int main()
{
	int Ax1, Ay1, Ax2, Ay2, Bx1, By1, Bx2, By2;
	int MaxAx, MinAx, MaxAy, MinAy, MaxBx, MinBx, MaxBy, MinBy; 
	scanf("%d %d %d %d", &Ax1, &Ay1, &Ax2, &Ay2);
	scanf("%d %d %d %d", &Bx1, &By1, &Bx2, &By2);
	MaxAx = MAX(Ax1, Ax2), MinAx = Ax1 + Ax2 - MaxAx;
	MaxAy = MAX(Ay1, Ay2), MinAy = Ay1 + Ay2 - MaxAy;
	MaxBx = MAX(Bx1, Bx2), MinBx = Bx1 + Bx2 - MaxBx;
	MaxBy = MAX(By1, By2), MinBy = By1 + By2 - MaxBy;
	int  m , n;
	m = (MaxAx < MaxBx ? MaxAx:MaxBx) - (MinAx > MinBx ? MinAx:MinBx);
	n = (MaxAy < MaxBy ? MaxAy:MaxBy) - (MinAy > MinBy ? MinAy:MinBy);
	if(m <= 0 || n <= 0) printf("0\n");
	else printf("%d\n", m * n);
	return 0;

}







/*������ҵ�ɱ��˶���ʵ����ɣ����г�Ϯ��Ϊ��Ը�е��ɴ˴�����һ�в������*/
/*��������ʽ��
�ӱ�׼�����ȡ�����Կո�ָ�����������ʽ���£�
Ax1 Ay1 Ax2 Ay2
Bx1 By1 Bx2 By2
���У�x1��y1���ͣ�x2��y2��Ϊ���ζԽ����϶˵�����ꡣ������ֵ��Ϊ������ȡֵ��0��1000֮�䡣
�������ʽ��
���׼�����ӡһ�����������������ཻ���ֵ����������Ϊ0����
������������
0 0 2 2
1 1 3 4
�����������
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







/*本次作业由本人独立实现完成，如有抄袭行为，愿承担由此带来的一切不良后果*/
/*
【问题描述】
给定一个精度值e，用下列公式计算π的近似值，要求前后两次π的迭代之差的绝对值小于e，给出相应的最小迭代次数n和最后一次计算的π的值。
π/2=1+1!/3+2!/(3×5)+3!/(3×5×7)+…+(n-1)!/(3×5×7×…×(2n-1))
【输入形式】
从控制台输入e( e>=0.000001 )的值。
【输出形式】
输出迭代次数n和最后一次计算的π的值（以一个空格分隔，并且输出π时要求小数点后保留7位有效数字）。
【样例输入】
0.000003
【样例输出】
19 3.1415912    */
#include <stdio.h>
long long fact1(int a) {
	long long int s = 1;
	int i;
	for (i = 1; i <= a; i++)
	{
		if (i % 2 != 0) continue;
		s *= i;
	}
	return s;
}
long long fact2(int a, int b) {
	long long int s = 1;
	int i;
	for (i = a; i <= b; i += 2)
		s *= i;
	return s;
}

int main()
{
	int a, b, n = 0;
	double t, s = 1;
	double p,  e;
	scanf("%lf", &e);
	t = 2.0;
	for (n = 2; n <= 25; n++) {
		b = 2 * n - 1;
		if ((n - 1) % 2 == 0) a = n;
		else a = n + 1;
		s += (double)fact1(n - 1) / (double)fact2(a, b);
		p = 2 * s;
		if (p - t >= e) t = p;
		else {
			printf("%d %.7lf\n", n, p);
			break;
		}
	}
	return 0;
}


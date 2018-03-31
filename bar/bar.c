/*本次作业由本人独立实现完成，如有抄袭行为，愿承担由此带来的一切不良后果*/

#include <stdio.h>
#include <ctype.h>
int GetMax(int n, int a[]) {
	int i, MaxN = a[0];
	for (i = 0; i < n; i++) {
		if (a[i] > MaxN)
			MaxN = a[i];
	}
	return MaxN;
}

int main()
{
	char c;
	int alpha[26] = {0};
	while ((c = getchar()) != EOF) {
		if (islower(c)) {
			alpha[c - 'a']++;
		}
	}
	int i, maxc;
	maxc = GetMax(26, alpha);

	while (maxc) {
		for (i = 0; i < 26; i++){
			if (alpha[i] >= maxc){
				printf("*");
				alpha[i]--;				
			} 
			else printf(" ");
		}
		printf("\n");
		maxc--;
	}
	for(i = 0; i < 26; i++){
		printf("%c",i + 'a');
	}
	return 0;
}
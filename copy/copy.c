/*本次作业由本人独立实现完成，如有抄袭行为，愿承担由此带来的一切不良后果*/
#include <stdio.h>
int main()
{
	freopen("fcopy.in", "r", stdin);
	freopen("fcopy.out", "w", stdout);
	char c;
	int count = 0;
	while((c = getchar()) != EOF){
		if((c == ' ' || c == '	') && count < 1){
			printf(" ");
			count++;
		}
		else if(c != ' ' && c != '	'){
			printf("%c", c);
			count = 0;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
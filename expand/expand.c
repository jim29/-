/*本次作业由本人独立实现完成，如有抄袭行为，愿承担由此带来的一切不良后果*/
#include <stdio.h>
#include <ctype.h>
int main()
{
	char c, c1 = 0;
	int i, flag = 0;
	while((c = getchar()) != '\n'){
		if(c == '-'){
			flag = 1;
		}
		else{
			if(!flag){
				c1 = c;
				printf("%c", c);
			}
			else {
				if((islower(c) && islower(c1)) || (isupper(c) && isupper(c1)) || (isdigit(c) && isdigit(c1))){
					if(c == c1) printf("%c", c);
					else if(c > c1){
						for(i = c1 + 1; i <= c; i++)
							printf("%c", i);
					}
					else{
						for(i = c1 - 1; i >= c; i--)
							printf("%c", i);
					}
				}
				else{
					printf("-%c", c);
				}
				c1 = c;
				flag = 0;
			}
		}
	}
	return 0;
}
#include <stdio.h>
int main() {
	int rs=0;
	int r=0;
	int s=0;
	int k=0;
	const char* s1;
	const char* r1;
	for (;k<1;) {
		printf("请输入信号强度RS：");
		scanf("%d",&rs);
		if(rs>=11&&rs<=59) {
			r=rs/10;
			s=rs%10;
			switch(r) {
				case 1:
					r1="unreadable.";
					break;
				case 2:
					r1="barely readable, occasional words distinguishable.";
					break;
				case 3:
					r1="readable with considerable difficulty.";
					break;
				case 4:
					r1="readable with practically no difficulty.";
					break;
				case 5:
					r1="perfectly readable.";
					break;

			}
			switch(s) 
			{
				case 1:
					s1="Faint signals, barely perceptible, ";
					break;
				case 2:
					s1="Very weak signals, ";
					break;
				case 3:
					s1="Weak signals, ";
					break;
				case 4:
					s1="Fair signals, ";
					break;
				case 5:
					s1="Fairly good signals, ";
					break;
				case 6:
					s1="Good signals, ";
					break;
				case 7:
					s1="Moderately strong signals, ";
					break;
				case 8:
					s1="Strong signals, ";
					break;
				case 9:
					s1="Extremely strong signals, ";
					break;
			}
					printf("%s%s\n",s1,r1);
		}
		else 
		{
			printf("输入的数值错误！"); 
		}
	}
}


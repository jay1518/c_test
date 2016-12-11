#include <stdio.h>
int main ()
{
	int i = 0;
	int a = 0;	
	scanf ("%d",&i);
	if(i<1000)
	{
		int a = i/100;
		int b = i%100/10;
		int c = i%10;
	
		int o = c*100+b*10+a;
		printf("%d\n",o);
	
	}
	else{
		printf("输入必须是三位数");
	}
	
	return 0;
}

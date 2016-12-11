#include <stdio.h>
int main()
{
	int i=0;		//输入的数值
	int h=0;		//输出的二进制值
	int n=1;		//第几位数字
	int x=0;		//第几位数字的值
	int k=1;		//位数还原
	int o=0;		//最终输出结果
	scanf("%d",&i);
//将输入的数按照奇偶特征输出为二进制值
	while(i>0)
	{
		x=i%10;
		if(x%2==n%2)
		{
			h=h+1*k;
			k*=10;
			n++;
		}
		else
		{
			k*=10;
			n++;
		}
		i=i/10;
	}

//将二进制转为十进制
	int a, j=1;
	a=h;

	while(a)
	{
		o += (a%10) * j;
		a /= 10;
		j *= 2;
	}

	printf("%d",o);
	return 0;
}

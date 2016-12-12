#include <stdio.h>
int ret;
int sum;				//因数和
int pfnum(int i) 		//判断是否是完数，如果是，返回ret=1，否则返回ret=0
{
	int k;
	sum=0;
	ret=0;
	for(k=1; k<i; k++)
	{
		if(i%k==0)
		{
			sum+=k;
		}
	}
	if (sum==i)
	{
		ret=1;
	}
	return ret;
}

int main()
{
	int n,m;
	int x=1;
	int h=0;
	int i;
	scanf("%d %d",&n,&m);

	for(i=n; i<=m; i++) 			//判断完数的个数，用变量h计数
	{
		if (pfnum(i)==1)
		{
			h++;
		}
	}

	for(i=n; i<=m; i++) 			//输出完数
	{
		if (pfnum(i)==1)
		{
			if(x<h) 				//如果第x个完数小于总完数个数h，那么输出后面带有空格
			{
				printf("%d ",i);
				x++;
			}
			else
			{
				printf("%d",i);
			}
		}
	}

	if(h==0) 						//如果n到m之间没有完数，那么输出NIL
	{
		printf("NIL");
	}
}

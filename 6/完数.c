#include <stdio.h>
int ret;
int sum;				//������
int pfnum(int i) 		//�ж��Ƿ�������������ǣ�����ret=1�����򷵻�ret=0
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

	for(i=n; i<=m; i++) 			//�ж������ĸ������ñ���h����
	{
		if (pfnum(i)==1)
		{
			h++;
		}
	}

	for(i=n; i<=m; i++) 			//�������
	{
		if (pfnum(i)==1)
		{
			if(x<h) 				//�����x������С������������h����ô���������пո�
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

	if(h==0) 						//���n��m֮��û����������ô���NIL
	{
		printf("NIL");
	}
}

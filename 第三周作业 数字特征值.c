#include <stdio.h>
int main()
{
	int i=0;		//�������ֵ
	int h=0;		//����Ķ�����ֵ
	int n=1;		//�ڼ�λ����
	int x=0;		//�ڼ�λ���ֵ�ֵ
	int k=1;		//λ����ԭ
	int o=0;		//����������
	scanf("%d",&i);
//���������������ż�������Ϊ������ֵ
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

//��������תΪʮ����
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

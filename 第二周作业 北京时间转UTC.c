#include <stdio.h>
int main() {
	int h=0;						//Сʱ
	int m=0;						//����
	int i=0;						//����ʱ��
	int o=0;						//���ʱ��
	int s=8;						//ʱ��
	
	scanf("%d",&i);
	
	if (i<=2400)
	{
		if (i<60)
		{
			m=i;
			h=(24-s)*100;
		}

		else if(i<100)
		{
			h=(24-s+1)*100;
			m=i-60;
		}

		else if (i<1000) 
		{
			h=i/100;
			m=i%100;
			if(h<s&&m<60) 
			{
				h=(h-s+24)*100;
			} 
			else if(h>=s&&m<60) 
			{
				h=(h-s)*100;
			} 
			else if(h<s&&m>60) 
			{
				h=(h-s+24+1)*100;
				m=m-60;
			} 
			else 
			{
				h=(h-s+1)*100;
				m=m-60;
			}
		}

		else 
		{
			h=i/100;
			m=i%100;
			if(m<60) 
			{
				h=(h-s)*100;
			} 
			else 
			{
				h=(h-s+1)*100;
				m=m-60;
			}
		}
	}

	printf("%d",h+m);
	
	return 0;
}

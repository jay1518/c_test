#include <stdio.h>
int main()
{
	int s = 0;			//��Ʒ��� 
	int i = 0;			//֧����� 
	printf("��������Ʒ��\n");
	scanf("%d",&s);
	printf("������֧���Ľ�\n");
	scanf("%d",&i);
	
	if(i>=s){
		int o = i-s;	 //Ӧ�ҽ�� 
		printf("Ӧ�ң�%d",o);
	}
	else{
		printf("֧������\n"); 
	}
	return 0;

 } 

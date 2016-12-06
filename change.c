#include <stdio.h>

int main()
{
	int price = 0;
	int amount = 100;
	
	printf("请输入金额:");
	scanf("%d",&price);
	
	printf("请输入票面：");
	scanf("%d",&amount);
	int change = 10.3 - price;
	
	printf("找您%d元",change);
	
	return 0; 
	
 } 

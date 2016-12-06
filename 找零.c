#include <stdio.h>
int main()
{
	int s = 0;			//商品金额 
	int i = 0;			//支付金额 
	printf("请输入商品金额：\n");
	scanf("%d",&s);
	printf("请输入支付的金额：\n");
	scanf("%d",&i);
	
	if(i>=s){
		int o = i-s;	 //应找金额 
		printf("应找：%d",o);
	}
	else{
		printf("支付金额不足\n"); 
	}
	return 0;

 } 

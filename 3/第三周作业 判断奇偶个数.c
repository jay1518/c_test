/*
题目内容：
你的程序要读入一系列正整数数据，输入-1表示输入结束，-1本身不是输入的数据。程序输出读到的数据中的奇数和偶数的个数。

输入格式:
一系列正整数，整数的范围是（0,100000）。如果输入-1则表示输入结束。

输出格式：
两个整数，第一个整数表示读入数据中的奇数的个数，第二个整数表示读入数据中的偶数的个数。两个整数之间以空格分隔。

输入样例：
9 3 4 2 5 7 －1 

输出样例：
4 2
*/



//do-while写法 

#include <stdio.h>
int main()
{
	int i = 0;
	int d = 0;
	int j = 0;
	do{
 	scanf("%d",&i);
		if (i%2!=1){
			d++;
		}
		else if (i==0){
		}
		else{
			j++;
		}
	}while(i!=(-1)); 
	printf("%d ",j);
	printf("%d",d-1);
	
	return 0;
 } 
 
 
 
 //while写法 
 /*
 #include <stdio.h>
int main()
{
	int i = 0;
	int d = 0;
	int j = 0;
	scanf("%d",&i);
	while(i!=(-1)){
		if (i%2!=1){
			d++;
		}
		else if (i==0){
		}
		else{
			j++;
		}
		scanf("%d",&i);
	}
	printf("%d ",j);
	printf("%d",d);
	
	return 0;
 } 
 */

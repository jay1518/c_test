#include <stdio.h>
int x=0;
int n,m,k,i,ret;

int isp(int i){						//定义函数：判断x是否为素数 
	ret=1;
	for(k=2;k<i-1;k++){
		if(i%k==0){
			ret =0;
			break;
		}
	}
	return ret;
}


int fenjie(int i){					//定义函数：分解最小因数 
	n=0;
	m=1;
	for(n=2;n*m!=i;m++){
			if(m>i){
			n++;
			m=1;
		}
	}
}

int main(){							//主函数：分解质因数 
	scanf("%d",&x);
	printf("%d=",x);
	i=x;
	isp(i);
	if(ret==0){
		while(ret==0){
			fenjie(i);
			printf("%dx",n);
			i=m;
			ret=1;
			isp(i);
			if(ret==1){
				printf("%d",m);
				break;
			}
		}
	}else{
		printf("%d",x);
	}
}


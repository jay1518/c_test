#include <stdio.h>
int main() {
	int k=1;
	for(; k>0; k++) {
		int a=8;
		int i = 0;
		int o = 0;
		scanf("%d",&i);

		if(i<60) {
			o=(24-a)*100+i;

		}

		else if(i<999&&i>=60) {
			if(i==60) {
				o=(24+1-a)*100;
			}

			else if(i>60&&i<100) {
				o=(24-a)*100+i-60;
			}

			else if(i>800) {
				o=(i/100-a)*100+i%100;
			}

			else {
				o=(24+i/100-a)*100+i%100;
			}
		}

		else if(i<=2400) {
			o=(i/100-a)*100+i%100;
		}

		printf("%d\n",o);
	}

	return 0;
}

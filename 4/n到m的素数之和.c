#include <stdio.h>
 
int main()
{
    int x,m,n,s=0;
    int cnt = 0;
    scanf("%d %d",&n,&m);
    x = 1;
    while ( cnt <= m ) {
        int i;
        int isPrime = 1; //  xÊÇËØÊý
        for ( i=2; i<x; i++ ) {
            if ( x % i == 0 ) {
                isPrime = 0;
                break;
            }
        }
        if ( isPrime == 1 ) 
             
            if ( cnt ++  >= n ) {
                s+=x;
            }
         
        x++;
    }
        printf("%d", s);
    return 0;
}

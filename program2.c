#include<stdio.h>
main(){
    int bs,gs,hra,ta,da;
    
    printf("Enter Basic salary:");
    scanf("%d",&bs);

	da = ( 5 * bs) / 100;
	ta = ( 8  * bs) / 100;
	hra= ( 10* bs) / 100;
	
   gs = bs + hra + da + ta;
	
	printf("%d is gs",gs);

}

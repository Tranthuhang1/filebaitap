#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
int i,j,max;

printf("please enter the maximum value\n" );
printf("For which a talbe can be printed:");
scanf("%d",&max);
for(i=0,j=max; i<=max; i++,j--)		
	printf("%d + %d = %d\n",i,j,i+j);
				
}

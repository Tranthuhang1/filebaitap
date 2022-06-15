#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
int a;
int b;
int count;
int dem;
printf("nhap vao so a" );
scanf("%d",&a);

printf("nhap vao so b");
scanf("%d",&b);


	for(count=a, dem=0; count<=b;count++,dem++){
		if(count%7==0){
			printf("%d\n",count);
			printf("%d",dem);
		}
		
	}
	return 0;
	
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
int a;
int b;
int count;

printf("nhap vao so a" );
scanf("%d",&a);

printf("nhap vao so b");
scanf("%d",&b);


	for(count=a; count<=b;count++){
		if(count%7==0);
		printf("%d\n",count);
	}
	return 0;
	
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
  
  int A; 
  int B;
  float KQ;
     int LT;
  int TH;
   int BTl;
  printf("nhap so buoi hoc \n");

  printf("nhap so buoi da diem danh co\n");

  

  
scanf("%d%d", &A,&B);
KQ=(B/A)*100;

//  printf("Ti le buoi di hoc\n");
//  Scanf("%d",KQ);
//  
	if(KQ>=25){
		
		printf("du dk thi");
	printf("nhap diem thi ly thuyet, thuc hanh, Bt lon\n");
	scanf("%d%d%d",&LT,&TH,&BTl);
//   
	if(LT>=8) {
		printf(" pass mon ly thuyet");
	}
    else{
    	printf("ban thi mon ly thuyet");	
	} 
    
    
    if(TH>=6) {
		printf(" pass mon thuc hanh");	
	}
    else{
    	printf("ban thi mon thuc hanh");	
	} 
	
	if(BTl>=4) {
		printf(" pass mon Btl");
	}
    else{
    	printf("ban thi mon Btl");	
	} 
//	if(TH>=6)printf(" pass")
//     else printf("ban thi mon thuc hanh");
//     
//     if(BTl>=)printf(" pass")
//     else printf("ban thi mon BTl");
		
	}
	


  
  else{
  	printf("ban hoclai");
  } 
return 0;
}

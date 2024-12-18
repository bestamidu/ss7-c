#include<stdio.h>
int main(){
	int n[5]={2,4,9,7,13};
	int count=0;
	
	
	for(int i=0 ; i<5 ; i++){
    if ( n[i]%2==0){
    	printf (" so chan la %d",n[i]);
    	count++;}
    if (count==0){
    	printf(" khong phai so chan ");}
      else {
    		printf("\n ");}
	}
	
	return 0;
}
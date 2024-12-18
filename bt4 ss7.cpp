#include<stdio.h>
int main(){
	int n;
	printf("nhap n ");
	scanf("%d",&n);
	int a[n];
	for ( int i = 0 ; i<n ; i++){
	printf ("gia tri thu %d\n = ",i);
	scanf("%d",&a[i]);}
	for ( int i = 0 ; i<n ; i++){
	printf ("gia tri thu %d\n = %d  ",i,a[i]);}
	return 0;
}
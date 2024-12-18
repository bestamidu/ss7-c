#include <stdio.h>

int main() {
    int n[5] = {1, 2, 3, 4, 5}; 
    for( int i =0 ; i<5 ;i++){
    	if ( n[i]%2==0 ){
    		n[i]+=3;
		}
		else {
			n[i]+=2;
		}
		printf("so chan va le la %d\n",n[i]);
	}
return 0;
	}
	
   
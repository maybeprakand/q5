#include <stdio.h>
int OR(int a, int b){
	if(a==0 && b==0){
		return 0;
		
	}
	else {
		return 1;
	}
}
	int main(){
		int a,b;
		printf("A\t B\t A.B\t\n");
		for(a=0;a<=1;a++){
			for(b=0;b<=1;b++){
				printf("%d\t %d\t %d\t\n",a,b,OR(a,b));
			}
		}
		return 0;
	}


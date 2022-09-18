#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x,y,a,b,c;
	scanf("%d",&a);
	for(y=a;y>0;y--){
		for(x=y;x>0;x--){
			printf(" ");
		}
		for(x=1;x<=y;x++){
			printf("* ");
		}
			
		printf("\n");
	}
	
	
	
	
	
	
	
	return 0;
}

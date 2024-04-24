#include <stdio.h>
int main(){
	int i,j,k,l;
	int a[10];
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	
	for(int j=0;j<9;j++){
		for(int k=0;k<9-j;k++){
			if(a[k]>a[k+1]){
					l=a[k];
					a[k]=a[k+1];
					a[k+1]=l;
				
			}
		}
	}
	for(int i=0;i<=9;i++){
		printf("%d",a[i]);
		printf("\n");
	}
	printf("\n");
	return 0;
}

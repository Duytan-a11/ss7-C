#include <stdio.h>

int main(){
	int a[10] = {1,2,3,4,5,-10,-9,-8,123,456};
	for(int i=0;i<10;++i){
		printf("Phan tu thu %d: ",i);
		printf("%d \n",a[i]);
	}
	int size = sizeof(a)/sizeof(int);
	printf("Do dai cua mang la: %d",size);
return 0;
}

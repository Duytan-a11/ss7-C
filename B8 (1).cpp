#include <stdio.h>

int main(){
	int n,m;
	printf("Nhap vao so hang: ");	
	scanf("%d",&n);
	printf("Nhap vao so cot: ");	
	scanf("%d",&m);
	int a[n][m];
	
	for(int i=0;i<n;i++){
		printf("Nhap vao phan tu thu %d: ",i+1);
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Day la ma tran cua ban:\n");
	for(int i=0;i<n;++i){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
return 0;
}

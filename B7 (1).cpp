#include <stdio.h>

int main(){
	int n;	printf("Nhap vao so phan tu cua mang: ");	
	scanf("%d", &n);
	printf("Mang cua ban co %d phan tu!\n",n);
	int a[n];
	
	while(n){
		printf("Nhap vao so le N: ");	
		scanf("%d",&a[n-1]);
		if(a[n-1] % 2 != 0){
			if(n == 1)	
			printf("Chuong trinh nhap so chan ket thuc!");
			else	
			printf("Day dung la so chan hay nhap so tiep theo!\n");
			n--;
		}
		else	printf("Khong phai so le vui long nhap lai!\n");
	}
return 0;
}

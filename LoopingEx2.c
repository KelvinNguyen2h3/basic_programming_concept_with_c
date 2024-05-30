//vi du vong lap: viet chuong trinh tinh tong cac so nguyen tu 1 den n
//while

#include <stdio.h> 

int main(){ 
	//khai bao bien
	int n;
	int s = 0;
	int i = 1;
	
	//input
	printf("Day la chuong trinh tinh tong cac so nguyen tu 1 den n\n");
	printf("Moi ban nhap n = ");
	scanf("%d", &n);
	
	//output
	while(i<=n){
		s=s+i;
		i++;
	}
	printf("tong can tinh la %d", s);
}
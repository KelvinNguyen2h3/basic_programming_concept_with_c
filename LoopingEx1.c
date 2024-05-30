//vi du vong lap: a viet chuong trinh tinh tong cac so nguyen tu 1 den n
//b tinh tong cac so nguyen le tu 1 den n
//c tinh tong cac so nguyen chan tu 1 den n
#include <stdio.h> 

int main(){ 
	//khai bao bien
	int n;
	int s= 0;
	int i;
	
	//input
	printf("Day la chuong trinh tinh tong cac so nguyen tu 1 den n\n");
	printf("Moi ban nhap n = ");
	scanf("%d", &n);
	
	//output
	for(i=2;i<=n;){
		s+=i; //s=s+i;
		i+=2;
	}
	printf("tong can tinh la %d", s);
}
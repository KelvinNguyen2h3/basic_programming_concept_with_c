//vi du lenh dieu kien: viet chuong trinh tim nghiem cua pt ax+b=0
#include <stdio.h>

int main() {
	//khai bao bien
	float a, b;
	float x;
	
	//input
	printf("day la chuong trinh giai pt ax+b=0\n");
	printf("nhap so a: ");
	scanf("%f", &a);
	printf("nhap so b: ");
	scanf("%f", &b);
	
	//xu ly ra output
	if(a != 0) {
		x = -b/a;
		printf("x = %f", x);
	} else if(b != 0) {
		printf("pt vo nghiem");
	} else {
		printf("pt vo so nghiem");
	}
}

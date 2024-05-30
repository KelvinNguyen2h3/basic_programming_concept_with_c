//vi du ham: viet chuong trinh giai pt bac 2
//ax^2+bx+c=0
#include <stdio.h> 
#include <math.h>

//khai bao toan cuc (global)
float a, b, c;
float x, x1, x2;

//tinh delta
float tinhDelta(float a, float b, float c){
	return b*b-4*a*c;
}

//giai pt bac nhat
int bacnhat(float b, float c) {	
	if(b != 0) {
		x = -c/b;
		printf("x = %f", x);
	} else if(c != 0) {
		printf("pt vo nghiem");
	} else {
		printf("pt vo so nghiem");
	}
}

//ham main
int main(){ 
	//input
	printf("day la chuong trinh giai pt bac 2 ax^2+bx+c=0, moi ban nhap a, b, c theo dung thu tu\n");
	printf("a = ");
	scanf("%f", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);
	
	//xu ly
	if(a==0){
		bacnhat(b, c);
	} else {
		float delta = tinhDelta(a, b, c);
		if(delta<0){
			printf("pt vo nghiem");
		} else if(delta==0){
			x = -b/(2*a);
			printf("x = %f", x);
		} else {
			x1 = (-b-sqrt(delta))/(2*a);
			x2 = (-b+sqrt(delta))/(2*a);
			printf("x1 = %f\n", x1);
			printf("x2 = %f\n", x2);
		}
		
	}
}


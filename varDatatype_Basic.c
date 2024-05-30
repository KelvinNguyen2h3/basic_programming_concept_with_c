#include <stdio.h>

int main(){
	//khai báo biến
	int a;
	char c = 't';
	float f;
	double d;
	//gán giá trị, =
	a = 1;
	f = 3.14;
	d = 3.14;
	//in ra
	printf("kieu so nguyen: %d\n", a);
	printf("kieu ki tu: %c\n", c);
	printf("kieu so thap phan, float: %f\n", f);
	printf("kieu thap phan, double: %f\n", d);
	
	// In ra số byte của các biến
    printf("So byte cua bien int a: %zu\n", sizeof(a));
    printf("So byte cua bien char c: %zu\n", sizeof(c));
    printf("So byte cua bien float f: %zu\n", sizeof(f));
    printf("So byte cua bien double d: %zu\n", sizeof(d));

    // In ra số byte của các kiểu dữ liệu trực tiếp
    printf("So byte cua kieu du lieu int: %zu\n", sizeof(int));
    printf("So byte cua kieu du lieu char: %zu\n", sizeof(char));
    printf("So byte cua kieu du lieu float: %zu\n", sizeof(float));
    printf("So byte cua kieu du lieu double: %zu\n", sizeof(double));
}


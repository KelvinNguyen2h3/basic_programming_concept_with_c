#include <stdio.h>

int main(){
//	int a = 2;
//	int b = 3;
//	printf("%f",(float)b/a);

//switchcase
//vi du chuong trinh cau hoi trac nghiem (a, b, c, d)
	char choose;
	printf("Dau khong phai la mot trong cac concept cua lap trinh \na. Ham \nb. Cau truc re nhanh \nc. Ep kieu \nd. Bien\n");
	printf("Moi ban chon dap an: ");
	scanf("%c", &choose);
	
	switch(choose){
		case 'a':
			printf("Sai. Dap an phai la c");
			break;
		case 'b':
			printf("Sai. Dap an phai la c");
			break;
		case 'd':
			printf("Sai. Dap an phai la c");
			break;
		case 'c':
			printf("Dung");
			break;
		default:
			printf("Khong hop le");
			break;
	}
}
#include <stdio.h>

int main(){
//	Array
//	int arr[4] = {23,34,12,55};
//	//bat dau tu 0 den n-1 cu the o day la 4-1 = 3
//	printf("dan xuat dau tien: %d\n", arr[0]);
//	printf("dan xuat dau tien: %d\n", arr[1]);
//	printf("dan xuat dau tien: %d\n", arr[2]);
//	printf("dan xuat dau tien: %d\n", arr[3]);
//	printf("Gia tri cua mang: %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);

//Pointer (con tro)
//	int a = 10;
//	int *p;
//	p = &a;
//	printf("gia tri cua a: %d\n", a);
//	printf("Dia chi cua a: %p\n", p);

// Khai báo cấu trúc (structure)
struct Person {
    char name[50];//STRINGS
    int age;
    float height;
};

// Khai báo hợp (union)
union Data {
    int i;
    float f;
    char str[20];//STRINGS
};
// Sử dụng cấu trúc
    struct Person person1;
    sprintf(person1.name, "John Doe"); 
    person1.age = 30;
    person1.height = 5.9;

    // In ra các giá trị của cấu trúc
    printf("Thong tin ve nguoi:\n");
    printf("Ten: %s\n", person1.name);
    printf("Tuoi: %d\n", person1.age);
    printf("Chieu cao: %.1f\n", person1.height);

    // Sử dụng hợp
    union Data data;
    
    // Gán và in giá trị của thành viên int
    data.i = 10;
    printf("Gia tri cua union Data khi gan int: %d\n", data.i);

    // Gán và in giá trị của thành viên float
    data.f = 220.5;
    printf("Gia tri cua union Data khi gan float: %.2f\n", data.f);

    // Gán và in giá trị của thành viên string
    sprintf(data.str, "Hello");
    printf("Gia tri cua union Data khi gan string: %s\n", data.str);

    // In lại giá trị của các thành viên để thấy sự thay đổi
    printf("Sau khi gan string:\n");
    printf("Gia tri cua union Data khi truy cap int: %d\n", data.i);
    printf("Gia tri cua union Data khi truy cap float: %.2f\n", data.f);
    printf("Gia tri cua union Data khi truy cap string: %s\n", data.str);
}
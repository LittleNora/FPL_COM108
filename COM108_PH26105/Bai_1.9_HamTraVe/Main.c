#include <stdio.h>

void tinhTong2A(int a, int b) {
	printf_s("%d + %d = %d\n", a, b, a + b);
}

int tinhTong2B(int a, int b) {
	printf_s("%d + %d = %d\n", a, b, a + b);
	return a + b;
}

int main() {
	tinhTong2A(10, 5);
	tinhTong2A(10, 10);
	printf_s("Tong = %d\n", tinhTong2B(10, 10));
}
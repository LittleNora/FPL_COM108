#include <stdio.h>

void tinhTong() {
	int a = 5, b = 2;
	printf_s("%d + %d = %d", a, b, a + b);
}

void tinhTong2(int a, int b) {
	printf_s("%d + %d = %d", a, b, a + b);
}

//Bài tập: Tạo hàm phép nhân 3 số bằng void có tham số
void nhanBaSo(int a, int b, int c) {
	printf_s("%d x %d x %d = %d\n", a, b, c, a * b * c);
}

int main() {
	printf_s("Chao cac ban den voi bai Ham\n");
	printf_s("Bai tap nhan 3 so\n");
	nhanBaSo(4, 7, 9);
}
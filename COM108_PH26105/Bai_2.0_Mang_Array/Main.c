#include <stdio.h>

int main() {
	int a = 5;

	int arrNumbers[] = { 99,11,22 };
	int arrYears[4];
	arrYears[0] = 2021;
	arrYears[1] = 2022;
	arrYears[2] = 2023;
	arrYears[3] = 2024;

	/*printf_s("Index 0 = %d\n", arrYears[0]);
	printf_s("Index 1 = %d\n", arrYears[1]);
	printf_s("Index 2 = %d\n", arrYears[2]);
	printf_s("Index 3 = %d\n", arrYears[3]);*/

	for (int i = 0; i < 4; i++)
	{
		printf_s("Index %d = %d\n", i, arrYears[i]);
	}
}
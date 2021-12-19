#include <stdio.h>

int main() {
	int arrNumbers[] = { 9,5,4,6 };
	printf_s("Mang chua sap xep: ");
	for (int i = 0; i < 4; i++)
	{
		printf_s("%d ", arrNumbers[i]);
	}
	printf_s("\n");
	for (int i = 0; i < 4 - 1; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (arrNumbers[i] > arrNumbers[j])
			{
				int temp = arrNumbers[i];
				arrNumbers[i] = arrNumbers[j];
				arrNumbers[j] = temp;
			}
		}
	}
	printf_s("Mang da sap xep: ");
	for (int i = 0; i < 4; i++)
	{
		printf_s("%d ", arrNumbers[i]);
	}
	printf_s("\n");
}
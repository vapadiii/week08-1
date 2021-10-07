#include<stdio.h>

int main() {
	int number[10];
	int before;
	int after;

	for (int i = 0; i < 10; i++) {
		printf("Input numbers : ");
		scanf("%d", &number[i]);
	}
	//printf("\n");
	printf("Data in array : ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", number[i]);
	}
	printf("\n");
	printf("Result : ");
	for (int i = 0; i < 10; i++) {
		before = number[i - 1];
		after = number[i + 1];
		if (before % 2 != 0 && after % 2 != 0) {
			printf("%d ", number[i]);
		}
		/*if(number[i]%2==0) {
			printf("%d ", number[i]);
		}*/
	}
	return 0;
}
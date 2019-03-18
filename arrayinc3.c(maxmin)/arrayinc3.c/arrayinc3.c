#include <stdio.h>
#define MAX 10;

int main(void) {

	int a[10] = { 8,17,5,18,5,9,1,2,5,4 };
	
	int max = a[0];
	int min = a[0];
	int result = 0;


	for (int i = 0; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	
	for (int i = 0; i < 10; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}

	result = max - min;
	printf("최댓값과 최솟값의 차이는 %d입니다", result);

	system("pause");
	return 0;
}

/*
int findmax(int a[]) {
	int max = a[1];
	

	for (int i = 0; i < 10; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;

}
*/

int findmin (int a[]) {
	int min = a[1];

	for (int i = 0; i < 10; i++) {
		if (min > a[i]) {
			min = a[i];
		}

	}
	return min;
}
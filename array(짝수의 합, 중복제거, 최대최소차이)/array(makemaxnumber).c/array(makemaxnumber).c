#include <stdio.h>

int maxof(int a[], int number) {

	int max = a[0];

	for (int i = 1; i <  number; i++) { // 최대값 찾는 함수
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}

int minof(int a[], int number) { // 최소값 찾는 함수
	int min = a[0];

	for (int i = 1; i < number; i++) {
		if (min > a[i]) {
			min = a[i];
		}
	}
	return min;
}

int main(void) {
	int number = 0;
	int *a; // 배열의 첫 번째 요소 포인터 
	printf("숫자를 입력해주세요.");
	scanf_s("%d", &number);
	 a = calloc(number, sizeof(int));
	int max = a[0];
	int min = a[0];
	int result = 0;
	int evenresult = 0;
	
	printf("%d개의 숫자를 입력해주세요.", number);
	for (int i = 0; i < number; i++) { //숫자 입력받기
		printf("a[%d]:", i);
		scanf_s("%d", &a[i]);
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				printf("중복되는 수 입니다. 다시 입력하세요."); // 중복 값 입력 제거 
				i--;
			}
		}
	}
	
	result = maxof(a, number) - minof(a, number);
	printf("최댓값과 최솟값의 차이는 %d입니다.", result );

	for (int i = 0; i < number; i++) { // 짝수의 합 구하기
		if (a[i] % 2 == 0) {
			evenresult += a[i];
		}
	}
	printf("짝수의 합은 %d입니다.\n", evenresult); 


	printf("\n");

	free(a);
	system("pause");

	return 0;
}
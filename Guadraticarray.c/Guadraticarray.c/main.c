#include <stdio.h>

int main(void) {
	int a[5][5];
	int num = 1;
	int column = 0;
	int row = 0;
	int sumofcolumn = 0; // 가로 변수
	int sumofrow = 0; // 세로 변수
	for (row = 0; row < 5; row++) { // 2차원 배열 생성
		for (column = 0; column < 5; column++) {
			a[row][column]= num++;
			//sumofrow = sumofrow + a[row][column];
			//sumofcolumn += a[row][column];
		}
	}
	for (int i = 0; i < 5; i++) { // 2차원 배열 출력
		for (int j = 0; j < 5; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			sumofcolumn += a[i][j];
		}
			printf("%d번째 가로의 합은: %d\t", i, sumofcolumn);
			sumofcolumn = 0;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			sumofrow += a[j][i];
		}
		printf("%d번째 세로의 합은: %d\t", i, sumofrow);
		sumofrow = 0;
	}
	
	system("pause");

	return 0;
}
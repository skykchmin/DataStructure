#include <stdio.h>

int maxof(int a[], int number) {

	int max = a[0];

	for (int i = 1; i <  number; i++) { // �ִ밪 ã�� �Լ�
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}

int minof(int a[], int number) { // �ּҰ� ã�� �Լ�
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
	int *a; // �迭�� ù ��° ��� ������ 
	printf("���ڸ� �Է����ּ���.");
	scanf_s("%d", &number);
	 a = calloc(number, sizeof(int));
	int max = a[0];
	int min = a[0];
	int result = 0;
	int evenresult = 0;
	
	printf("%d���� ���ڸ� �Է����ּ���.", number);
	for (int i = 0; i < number; i++) { //���� �Է¹ޱ�
		printf("a[%d]:", i);
		scanf_s("%d", &a[i]);
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				printf("�ߺ��Ǵ� �� �Դϴ�. �ٽ� �Է��ϼ���."); // �ߺ� �� �Է� ���� 
				i--;
			}
		}
	}
	
	result = maxof(a, number) - minof(a, number);
	printf("�ִ񰪰� �ּڰ��� ���̴� %d�Դϴ�.", result );

	for (int i = 0; i < number; i++) { // ¦���� �� ���ϱ�
		if (a[i] % 2 == 0) {
			evenresult += a[i];
		}
	}
	printf("¦���� ���� %d�Դϴ�.\n", evenresult); 


	printf("\n");

	free(a);
	system("pause");

	return 0;
}
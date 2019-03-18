#include <stdio.h>

int main(void) {

	int a[10] = { 8 ,17,5,18,5,9,1,2,5,4 };
	int number = a[0];
	int length = sizeof(a);
	int same = 0;

	for (int i = 0; i < 10; i++) {
		

		for (int j = 0; j < i-1; j++) {
			if (a[i] == a[j])
				same++;
			
			
		}
	}

	printf("같은 값의 갯수는 %d입니다\n", same);
	system("pause");
	return 0;
}
#include <stdio.h>
#define MAX = 10
int main(void) {

	int a[10] = { 8,17,5,18,5,9,1,2,5,4 };
	int count = 0;

	for (int i = 0; i < 10; i++) {
		if (a[i] % 2 == 0) {
			count++;
		}
	}
	printf("Â¦¼öÀÇ °¹¼ö´Â %d°³ ÀÔ´Ï´Ù\n", count);

	system("pause");
	return 0;

}
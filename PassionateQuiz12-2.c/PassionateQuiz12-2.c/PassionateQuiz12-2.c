#include <stdio.h>

int main(void) {

	int num1 = 10;
	int num2 = 20;

	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *temp = 0;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	temp = ptr1;
	ptr1 = ptr2; 
	ptr2 = temp;
	
	printf("%d, %d", *ptr1, *ptr2);
	system("pause");
	return 0;
	
}
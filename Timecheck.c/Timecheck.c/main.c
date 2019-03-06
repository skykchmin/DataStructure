#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	clock_t start, finish;
	double duration;
	start = clock();
	
	for (int i = 1; i < 1000000; i++) {
		
	}
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f 초입니다.\n", duration);


	/*
	for(int i = 1; i < 100; i++) {
		for(int j = 1; j< 100; j++){
			for(int h = 1; h<100; h++){}
		}
	}
	*/
	
	system("pause");
}
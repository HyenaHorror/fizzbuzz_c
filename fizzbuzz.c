#include <stdio.h> // include information about standard library

int main()
{
	int i;
	for (i = 1; i <= 100; i = i + 1){
		if(i % 15 == 0){
			printf("FIZZ BUZZ\n");
		} else if (i % 3 == 0){
			printf("FIZZ\n");
		} else if (i % 5 == 0){
			printf("BUZZ\n");
		} else {
			printf("%d\n", i);
		}
	}
}

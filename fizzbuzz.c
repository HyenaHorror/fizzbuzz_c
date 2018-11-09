#include <stdio.h> // include information about standard library

int main()
{
	for (i = 1; i <= 100; i = i + 1){
		if(i % 15 == 0){
			console.log("FIZZ BUZZ");
		} else if (i % 3 == 0){
			console.log("FIZZ");
		} else if (i % 5 == 0){
			console.log("BUZZ");
		} else {
			console.log(i);
		}
	}
}
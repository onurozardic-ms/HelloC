#include<stdio.h>

int sum(int a, int b)
{
	return a + b;
}

void helloFromFunction() {
	printf("Hello World from function\n");
}

int main()
{
	helloFromFunction();

	printf("Hello World from main\n");
	printf("Toplam:%d", sum(3,5));
	return 0;
}
#include<stdio.h>


// call by reference
void SwapIntPtr(int **dp1, int **dp2) { // ptr1, ptr2의 주소값을 받아옴 
	int * temp = *dp1;  
	*dp1 = *dp2;
	*dp2 = temp;
}

int main() {
	int num1 = 10;
	int num2 = 20;

	int *ptr1 = &num1;
	int *ptr2 = &num2;

	printf("*ptr1, *ptr2 : %d, %d \n", *ptr1, *ptr2);

	SwapIntPtr(&ptr1, &ptr2);
	printf("*ptr1, *ptr2 : %d, %d", *ptr1, *ptr2);
	return 0;


}
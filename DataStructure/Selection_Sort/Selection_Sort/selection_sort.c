#include<stdio.h>
typedef int element;
int size;

void SelectionSort(int a[], int size) {
	int i, j, t, min;
	element temp;
	printf("\n������ ���� : ");

	for (t = 0; t < size; t++) {
		printf("%d ", a[t]);
	}
	printf("\n\n<<<<<<<<<<<<<���� ���� ����>>>>>>>>>>>>>>>>\n");
	for (i = 0; i < size - 1; i++) {
		min = i;
		for (j = i + 1; j < size; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
		printf("\n%d�ܰ� : ", i + 1);
		for (t = 0; t < size; t++) {
			printf("%3d", a[t]);
		}
	}
}

/**
void SelectionSort2(int a[], int size) {
	int i, j, t, max;
	element temp;
	printf("\n������ ���� : ");
	for (t = 0; t < size; t++) printf("%d", a[t]);
	printf("\n\n<<<<<<<<<<<<<<���� ����2 ����>>>>>>>>>>>>>>>>\n");

	for (i = size - 1; i>0; i--) {
		max = i;
		for (j = i - 1; j > ; j--) {
			if (a[j] > a[max]) max = j;
		}
		temp = a[i];
		a[i] = a[max];
		a[max] = temp;
		printf("\n%d�ܰ� : ", i);
		for (t = size - 1; t <= 0; t--) printf("%3d", a[t]);

	}
}
*/


void main() {
	element list[8] = { 69,10,30,2,16,8,30,22 };
	size = 8;
	SelectionSort(list, size);
	 // SelectionSort2(list, size);
}
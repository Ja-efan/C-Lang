#include<stdio.h>
typedef int element;
int size;

void bubbleSort(element a[], int size) {
	int i, j, t;
	int k = 0;
	element temp;
	printf("\n ������ ���� : ");
	for (t = 0; t < size; t ++ ) {
		printf("%d", a[t]);
	}
	printf("\n<<<<<<<< ���� ���� ���� >>>>>>>>>>\n");
	for (i = size - 1; i > 0; i--) {
		printf("\n %d�ܰ� >> ", ++k); // i�� ���� ��� 7->6->5...->1�ܰ� �̷��� �����
		for (j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			printf("\n\t");
			for (t = 0; t < size; t++) printf("%3d", a[t]);
		}
	}
}

void bubbleSort2(element a[], int size) {
	int i, j, t;
	element temp;
	printf("\n ������ ���� : ");
	for (t = 0; t < size; t++) {
		printf("%d", a[t]);
	}
	printf("\n\n<<<<<<<< ���� ����2 ���� >>>>>>>>>>\n");
	for (i = 0; i < size; i++) {
		printf("\n %d�ܰ� >> ", i+1);
		for (j = size - 1; j >= i; j--) {
			if (a[j] < a[j - 1]) {
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
			printf("\n\t");
			for (t = 0; t < size; t++) printf("%3d", a[t]);
		}
	}
}

void main() {
	element list[8] = { 69,10,30,2,16,8,31,22 };
	element list2[8] = { 68,12,32,5,15,9,30,23 };
	size = 8;
	bubbleSort(list, size);
	printf("\n\n---------------------------------------------------\n\n");
	bubbleSort2(list2, size);
}
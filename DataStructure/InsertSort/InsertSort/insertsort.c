#include<stdio.h>

int size;

void insertSort(int a[], int size) {
	int i, j, t, temp;
	printf("\n 정렬할 원소 : ");
	for (t = 0; t < size; t++) printf("%d ", a[t]);
	printf("\n\n<<<<<<<<<<<<<<<<< 삽입 정렬 수행>>>>>>>>>>>>>>>>>>");
	for (i = 1; i < size; i++) {
		temp = a[i];
		j = i;
		while ((j > 0) && (a[j - 1] > temp)) { // j-1이 첫 인덱스를 가진 원소일 때 까지 && j-1인덱스가 j보다 클 경우
			a[j] = a[j - 1]; // 인덱스 j-1의 키값을 한칸 뒤로 이동
			j = j - 1;
		}
		a[j] = temp; // 자리 이동한 키값의 원래 자리(a[j-1])에 인덱스 i의 키값을 저장
		printf("\n %d단계 : ", i);
		for (t = 0; t < size; t++) {
			printf("%3d", a[t]);
		}
	}
}

void main() {

	int list[8] = { 69,10,30,2,16,8,31,22 };
	size = sizeof(list) / sizeof(int);

	insertSort(list, size);

}
#include <stdio.h>

typedef struct dbshort {

	unsigned short upper;
	unsigned short lower;
}DBShort;

typedef union rdbuf {

	int iBuf;
	char dBuf[4];
	DBShort sBuf;
}RDBuf;

int main(void) {
	RDBuf buf;
	printf("���� �Է�: ");
	scanf("%d", &(buf.iBuf));

	printf("���� 2����Ʈ : %u \n", buf.sBuf.upper);
	printf("���� 2����Ʈ : %u \n", buf.sBuf.lower);
	printf("���� 1����Ʈ : %c \n", buf.dBuf[0]);
	printf("���� 1����Ʈ : %c \n", buf.dBuf[3]);

	return 0;
}
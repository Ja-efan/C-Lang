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
	printf("정수 입력: ");
	scanf("%d", &(buf.iBuf));

	printf("상위 2바이트 : %u \n", buf.sBuf.upper);
	printf("하위 2바이트 : %u \n", buf.sBuf.lower);
	printf("상위 1바이트 : %c \n", buf.dBuf[0]);
	printf("하위 1바이트 : %c \n", buf.dBuf[3]);

	return 0;
}
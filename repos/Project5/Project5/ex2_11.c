# include<stdio.h>

void main() {
	char *ptrArray[2];
	char **ptrptr;
	int i;

	ptrArray[0] = "Korea";
	ptrArray[1] = "Seoul";

	ptrptr = ptrArray;

	printf("\n ptrArray[0]'s addr (&ptrArray[0]) = %u", &ptrArray[0]);
	printf("\n ptrArray[0]'s val (ptrArray[0]) = %u", ptrArray[0]);
	printf("\n ptrArray[0]'s refer val (*ptrArray[0]) = %c", *ptrArray[0]);
	printf("\n ptrArray[0]'s refer string (*ptrArray[0]) = %s \n", *ptrArray);

	printf("\n ptrArray[1]'s addr (&ptrArray[1]) = %u", &ptrArray[1]);
	printf("\n ptrArray[1]'s val (ptrArray[1]) = %u", ptrArray[1]);
	printf("\n ptrArray[1]'s refer val (*ptrArray[1]) = %c", *ptrArray[1]);
	printf("\n ptrArray[1]'s refer string (*ptrArray[1]) = %s \n", *(ptrArray +1));

	printf("\n ptrptr's addr (&ptrptr) = %u", &ptrptr);
	printf("\n ptrptr's val (ptrptr) = %u", ptrptr);
	printf("\n ptrptr's refer val1 (*ptrptr) = %u", *ptrptr);
	printf("\n ptrptr's refer val2 (**ptrptr) = %c", **ptrptr);
	printf("\n ptrptr's refer string (**ptrptr) = %s", *ptrptr);

	printf("\n\n *ptrArray[0] : ");
	for (i = 0; i < 5; i++) 
		printf("%c", *(ptrArray[0] + i));
	printf("\n **ptrptr : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(*ptrptr + i));

	printf("\n\n *ptrArray[1] : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(ptrArray[1] + i));
	printf("\n **(ptrptr+1) : ");
	for (i = 0; i < 5; i++)
		printf("%c", *(*(ptrptr + 1) + i));

	getchar();

}
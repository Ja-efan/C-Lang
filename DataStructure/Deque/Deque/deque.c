#include<stdio.h>
#include<malloc.h>

typedef char element;
typedef struct DQNode { // deque는 이중연결리스트로 구현하는 것이 효율적
	element data;
	struct DQNode *llink;
	struct DQNode *rlink;
}DQNode;

typedef struct{
	DQNode *front, *rear; // DQNode 타입 데이터를 가리키는 포인터 front, rear
}DQueType;

DQueType *createDQue() {
	DQueType *DQ;
	DQ = (DQueType *)malloc(sizeof(DQueType));
	DQ->front = NULL;
	DQ->rear = NULL;
	return DQ;
}

int isEmpty(DQueType *DQ) {
	if (DQ->front == NULL) {
		printf("\n Linked Queue is Empty !");
		return 1;
	}
	else return 0;
}

void insertFront(DQueType *DQ, element item) {
	DQNode *newNode = (DQNode *)malloc(sizeof(DQNode)); //malloc 메모리 동적할당 
	newNode->data = item;
	if (DQ->front == NULL) {
		DQ->front = newNode;
		DQ->rear = newNode;
		newNode->rlink = NULL;
		newNode->llink = NULL;
	}
	else {
		DQ->front->llink = newNode;
		newNode->rlink = DQ->front;
		newNode->llink = NULL;
		DQ->front = newNode;
	}
}

void insertRear(DQueType *DQ, element item) {
	DQNode *newNode = (DQNode *)malloc(sizeof(DQNode));
	newNode->data = item;
	if (DQ->rear == NULL) {
		DQ->front = newNode;
		DQ->rear = newNode;
		newNode->rlink = NULL;
		newNode->llink = NULL;
	}
	else {
		DQ->rear->rlink = newNode;
		newNode->llink = DQ->rear;
		newNode->rlink = NULL;
		DQ->rear = newNode;
	}
}

element deleteFront(DQueType *DQ) {
	DQNode *old = DQ->front;
	element item;
	if (isEmpty(DQ)) return 0;
	else {
		item = old->data;
		if (DQ->front->rlink == NULL) { // 현재 노드가 하나 뿐인 상태라 데이터 삭제하고 나면 공백상태가 되는 경우 front와 rear를 모두 NULL포인터로 선언
			DQ->front = NULL;
			DQ->rear = NULL;
		}
		else { // 뒤에 노드가 더 있는 상태 
			DQ->front = DQ->front->rlink; // 현재 front다음 노드를 front로 설정
			DQ->front->llink = NULL; // 다음 front로 설정된 노드의 llink에 NULL설정
		}
		free(old);
		return item;
	}
}

element deleteRear(DQueType *DQ) {
	DQNode *old = DQ->rear;
	element item;
	if (isEmpty(DQ)) return 0;
	else {
		item = old->data;
		if (DQ->rear->llink == NULL) { //현재 노드가 하나 뿐인 상태라 데이터 삭제하고 나면 공백상태가 되는 경우 front와 rear를 모두 NULL포인터로 선언
			DQ->front = NULL;
			DQ->rear = NULL;
		}
		else {
			DQ->rear = DQ->rear->llink;
			DQ->rear->rlink = NULL;
		}
		free(old);
		return item;
	}
}

element peekFront(DQueType *DQ) {
	element item;
	if (isEmpty(DQ)) return 0;
	else {
		item = DQ->front->data;
		return item;
	}
}

element peekRear(DQueType *DQ) {
	element item;
	if (isEmpty(DQ)) return 0;
	else {
		item = DQ->rear->data;
		return item;
	}
}

void printDQ(DQueType *DQ) {
	DQNode *temp = DQ->front;
	printf("Deque : [");
	while (temp) {
		printf("%3c", temp->data);
		temp = temp->rlink;
	}
	printf(" ] ");
}

void main(void) {
	DQueType *DQ1 = createDQue();
	element data;

	printf("\n ***** 데크 연산 ***** \n");
	printf("\n front 삽입 A>> "); insertFront(DQ1, 'A'); printDQ(DQ1);
	printf("\n front 삽입 B>> "); insertFront(DQ1, 'B'); printDQ(DQ1);
	printf("\n rear 삽입 C>> "); insertRear(DQ1, 'C'); printDQ(DQ1);

	printf("\n front 삭제 >>"); data = deleteFront(DQ1); printDQ(DQ1);
	printf("\t 삭제 데이터 : %c", data);
	printf("\n rear 삭제 >>"); data = deleteRear(DQ1); printDQ(DQ1);
	printf("\t\t 삭제 데이터 : %c", data);
	
	printf("\n rear 삽입 D>> "); insertRear(DQ1, 'D'); printDQ(DQ1);
	printf("\n front 삽입 E>> "); insertFront(DQ1, 'E'); printDQ(DQ1);
	printf("\n front 삽입 F>> "); insertFront(DQ1, 'F'); printDQ(DQ1);

	data = peekFront(DQ1); printf("\n peek Front item : %c \n", data);
	data = peekRear(DQ1); printf(" peek Rear item : %c \n", data);

	
}



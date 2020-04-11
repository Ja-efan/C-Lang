#include<stdio.h>
#include<memory.h>
#include<stdlib.h>
#define MAX_VERTEX 10
#define FALSE 0
#define TRUE 1

typedef struct graphNode {
	int vertex;
	struct graphNode* link;
}graphNode;

typedef struct graphType {
	int n; // �׷����� ������ ���� ��ȣ?
	graphNode * adjList_H[MAX_VERTEX]; // ������ �迭 (��������Ʈ ��� ������ �迭) 
	int visited[MAX_VERTEX]; // �湮 ���� üũ �迭
}graphType;

typedef int element;

typedef struct stackNode { // ������ �湮�� ���� ������ stack
	int data;
	struct stackNode *link;
}stackNode;

stackNode * top;

int isEmpty() {
	if (top == NULL) return 1;
	else return 0;
}

void push(int item) {
	stackNode * temp = (stackNode *)malloc(sizeof(stackNode));
	temp->data = item;
	temp->link = top;
	top = temp;
}

int pop() {
	int item;
	stackNode * temp = top;

	if (isEmpty()) {
		printf("\n\n Stack is Empty! \n");
		return 0;
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
} // ���� >>

void createGraph(graphType *g) {
	int v;
	g->n = 0; 
	for (v = 0; v < MAX_VERTEX; v++) {
		g->visited[v] = FALSE;// ��� ����� �湮 false
		g->adjList_H[v] = NULL; // ��� ��������͸� null�����ͷ� ����
	}
}

void insertVertex(graphType *g, int v) {
	if (((g->n) + 1) > MAX_VERTEX) {
		printf("Over the vertex num");
		return;
	}
	g->n++;
}

void insertEdge(graphType *g, int u, int v) {
	graphNode * node;
	if (u >= g->n || v >= g->n) {
		printf("not existed vertex in graph");
		return;
	}
	node = (graphNode *)malloc(sizeof(graphNode)); // �޸� �����Ҵ�
	node->vertex = v; 
	node->link = g->adjList_H[u];
	g->adjList_H[u] = node;
}

void printf_adjList(graphType *g) {
	int i;
	graphNode* p;
	for (i = 0; i < g->n; i++) {
		printf("\n\t\t���� %c�� ���� ����Ʈ", i + 65);
		p = g->adjList_H[i];
		while (p){
			printf(" -> %c", p->vertex + 65);
			p = p->link;
		}
	}
}


// �׷��� g���� ���� v�� ���� ���� �켱 Ž�� ����
void DFS_adjList(graphType *g, int v) {
	graphNode * w;
	top = NULL;
	push(v);
	g->visited[v] = TRUE;
	printf(" %c", v + 65);

	while (!isEmpty()) {
		v = pop();
		w = g->adjList_H[v];
		while (w) {
			if (!g->visited[w->vertex]) {
				if (isEmpty()) push(v);
				push(w->vertex);
				g->visited[w->vertex] = TRUE;
				printf(" %c", w->vertex + 65);
				v = w->vertex;
				w = g->adjList_H[v];
			}
			else w = w->link;
		}
	}
}

void main() {
	int i;
	graphType *G9;
	G9 = (graphType *)malloc(sizeof(graphType));
	createGraph(G9);

	//G9
	for (i = 0; i < 7; i++) {
		insertVertex(G9, i);
	}

	insertEdge(G9, 0, 2);
	insertEdge(G9, 0, 1);
	insertEdge(G9, 1, 4);
	insertEdge(G9, 1, 3);
	insertEdge(G9, 1, 0);
	insertEdge(G9, 2, 4);
	insertEdge(G9, 2, 0);
	insertEdge(G9, 3, 6);
	insertEdge(G9, 3, 1);
	insertEdge(G9, 4, 6);
	insertEdge(G9, 4, 2);
	insertEdge(G9, 4, 1);
	insertEdge(G9, 5, 6);
	insertEdge(G9, 6, 5);
	insertEdge(G9, 6, 4);
	insertEdge(G9, 6, 3);

	printf("\n G9�� ���� ����Ʈ ");
	printf_adjList(G9);

	printf("\n\n///////////////////\n\n���� �켱 Ž�� >> ");
	DFS_adjList(G9, 0);
}

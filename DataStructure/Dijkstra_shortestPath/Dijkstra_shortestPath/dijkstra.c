#include<stdio.h>
#include<limits.h>

#define TRUE 1
#define FALSE 0
#define MAX_VERTEX 5 
#define INF 10000

int weight[MAX_VERTEX][MAX_VERTEX] = {
	{0,10,5,INF,INF},
	{INF,0,2,1,INF},
	{INF,3,0,9,2},
	{INF,INF,INF,0,4},
	{7,INF,INF,6,0}
};

int distance[MAX_VERTEX];
int S[MAX_VERTEX];

int nextVertex(int n) {
	int i, min, minPos;
	min = INT_MAX;
	minPos = -1;
	for (i = 0; i < n; i++) {
		if ((distance[i] < min) && !S[i]) {
			min = distance[i];
				minPos = i;
		}
		
	}
	return minPos;
}

int printStep(int step) {
	int i;
	printf("\n %3d 단계 : S = {", step);
	for (i = 0; i < MAX_VERTEX; i++) {
		if (S[i] == TRUE) {
			printf("%3c", i + 65);
		}
	}
	if (step < 1) printf("} \t\t\t");
	else if (step < 4) printf("} \t\t");
	else printf("} \t");
	printf("distance : [");
	for (i = 0; i < MAX_VERTEX; i++) {
		if (distance[i] == 10000)
			printf("%4c", '*');
		else printf("%4d", distance[i]);
		printf("%4c", ']');
		
	}
	return ++step;
}

void Dijkstra_shortestPath(int start ,int n) {
	int i, u, w, step = 0;

	for (i = 0; i < n; i++) {
		distance[i] = weight[start][i];
		S[i] = FALSE;
	}

	S[start] = TRUE;
	distance[start] = 0;

	step = printStep(0);

	for (i = 0; i < n - 1; i++) {
		u = nextVertex(n);
		S[u] = TRUE;
		for (w = 0; w < n; w++) {
			if (!S[w]) {
				if (distance[u] + weight[u][w] < distance[w])
					distance[w] = distance[u] + weight[u][w];
			}
		}
		step = printStep(step);
	}

}

void main(void) {
	int i, j;
	printf("\n ************가중치 인접 행렬**************\n\n");
	for (i = 0; i < MAX_VERTEX; i++) {
		for (j = 0; j < MAX_VERTEX; j ++ ) {
			if (weight[i][j] == 10000) {
				printf("%4c", '*');
			}
			else printf("%4d", weight[i][j]);
		}
		printf("\n\n");
	}

	printf("\n*************다익스트라 최단 경로 구하기***************\n\n");
	Dijkstra_shortestPath(0, MAX_VERTEX);
}

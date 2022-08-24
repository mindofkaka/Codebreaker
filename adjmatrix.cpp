#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, e, e1, e2;
	cin >> n >> e;
	int graph[n][n];
	memset(graph, 0, sizeof(graph));
	for(int i = 0; i < e; i++){
		cin >> e1 >> e2;
		graph[--e1][--e2] = 1, graph[e2][e1] = 1;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << graph[i][j];
		}
		cout << "\n";
	}
}

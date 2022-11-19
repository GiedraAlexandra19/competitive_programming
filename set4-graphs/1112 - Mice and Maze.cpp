#include <iostream>
#include <queue>
#include <vector>
#include <memory.h>
using namespace std;
typedef pair<int, int> p;
vector< vector<p> > edge;
priority_queue<p, vector<p>, greater<p>> pq; //greater para hacer comparaciones
int vals[101];
int vis[101];

void dijkstra(int end){
	vals[end] = 0;
	pq.push({ 0, end });
	while (!pq.empty()){
		auto [val, u] = pq.top();
		pq.pop();
		vis[u] = true;
		
		for (auto& [v, w] : edge[u]) if (!vis[v])
		{			
			int tmp = val + w;
			if (vals[v] == -1 || vals[v] > tmp){
				vals[v] = tmp;
				pq.push({ tmp, v });
			}
		}
	}
}
int main(){

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int T; //temporizador en cuenta regresiva
	cin >> T;
	while (T--){
		int N, End, Time, M; //N=#de celdas en el laberinto //M=conexiones en el laberinto
		cin >> N >> End >> Time >> M;
	
		edge.assign(N + 1, vector<p>());  //asignar nuevos valores a los elementos del vector
		memset(vis, false, sizeof(vis)); //copiar un caracter por un num esoecifico de veces a un objeto
	
		for (int i = 0; i < 101; ++i) vals[i] = Time + 1;
		while (M--)
		{
			int u, v, w;
			cin >> u >> v >> w;
			edge[v].push_back({ u, w });
		}
		
		dijkstra(End);
		int count = 0;
		for (int i = 1; i <= N; ++i) if (vals[i] <= Time) ++count;
		cout << count << "\n";
		if (T) cout << "\n";
	}
	return 0;
}

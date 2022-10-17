#include<iostream>
#include<bits/stdc++.h>

using namespace std;

const int n=8;
int A[n][n*(n-1)/2];  //A[n][m]

int main(){
	int a,n,m;
	scanf("%d",&a);
	while(a--){
		scanf("%d%d", &n,&m);
		vector<vector<int> >aux(m);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				scanf("%d",&A[i][j]);
				if(A[i][j]) aux[j].push_back(i);
				if(i) A[i][j]+=A[i-1][j];
			}
		}
		int b=0;
		
		for(int i=0;i<m;i++)
			if(A[n-1][i]!=2){ 
				b=1; break;
			}
			if(b==0){
				sort(aux.begin(),aux.end());
				for(int i=1;i<m;i++)
					if(aux[i]==aux[i-1]){
						b=1; break;
				}
			}
			printf(b==0 ? "Yes\n": "No\n");
	}
	return 0;
		
}


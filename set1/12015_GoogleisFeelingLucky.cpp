#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;cin>>n;
    for(int j=1;j<=n;j++){
        int max=0;
        vector<pair<string,int>> websites;
        for(int i=0;i<10;i++){
            string website;cin>>website;
            int pri;cin>>pri;
            pair<string,int> caso;
            caso.first=website;
            caso.second=pri;
            websites.push_back(caso);
            if (pri>max)
                max=pri;
        }
        cout<<"Case #"<<j<<":\n";
        for(int i=0;i<10;i++){
            if (websites[i].second==max)
                cout<<websites[i].first<<'\n';
        }
    }
}
/*
#include<stdio.h>
int main(){
	int t;
	int i;
	scanf("%d",&t);	
	for(i=1;i<=t;i++){
		int j;
		char website[10][100];
		int m[10];
		int highest;
		for(j=0;j<10;j++)
			scanf("%s%d",website[j],&m[j]);
		for(j=highest=0;j<10;j++)
			if(m[j]>highest)
				highest=m[j];
		printf("Case #%d:\n",i); 
		for(j=0;j<10;j++)
			if(m[j]==highest)
				printf("%s\n",website[j]);
	}
	return 0;
}*/
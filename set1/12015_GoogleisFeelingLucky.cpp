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

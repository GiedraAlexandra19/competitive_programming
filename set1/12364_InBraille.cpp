#include <bits/stdc++.h>
using namespace std;
vector<string> braille = {
        ".***..", "*.....", "*.*...", "**....", "**.*..", "*..*..", "***...", "****..", "*.**..", ".**..."
};


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    while(true){
        int D; cin >> D;
        if(!D || D == EOF) break;
        char let; cin >> let;
        if(let == 'S'){
            string mess; cin >> mess;
            for(int j = 0 ; j < D; j++){
                if(j) cout << ' ';
                int ind = mess[j] - '0';
                cout << braille[ind][0] << braille[ind][1];
            }
            cout << '\n';
            for(int j = 0 ; j < D; j++){
                if(j) cout << ' ';
                int ind = mess[j] - '0';
                cout << braille[ind][2] << braille[ind][3];
            }
            cout << '\n';
            for(int  j = 0; j < D; j++){
                if(j) cout << ' ';
                cout << '.' << '.';
            }
            cout << '\n';
        }
        else{
            vector<string> path(4);
                for(int  i = 0; i < 4 ; ++i){
                    getline(cin,path[i]);
                }
                for(int i = 0; i < D*3 - 1 ; i+=3){
                    for(int j = 0; j < 10; j++){
                        if(path[1].substr(i,2) == braille[j].substr(0,2) && path[2].substr(i,2) == braille[j].substr(2,2))
                        {
                            cout << (char)(j + '0'); break;
                        }
                    }
                }
                cout << '\n';
        }
    }
    
    return 0;
}
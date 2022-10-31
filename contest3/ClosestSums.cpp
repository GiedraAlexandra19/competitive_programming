#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
ll arr[1000];
int main(){
    int n,m;
    int cont=1;
    while(cin>>n){
        cout<<"Case "<<cont<<":\n";
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        cin>>m;
        if(m>0){
            for (int k = 0; k < m; k++){
                ll aux;
                cin>>aux;
                ll suma=arr[0]+arr[1];
                for (int i = 0; i < n; i++){
                    for (int j = i+1; j < n; j++){
                        ll resul=arr[i]+arr[j];
                        if(abs(resul-aux)<abs(suma-aux)){
                            suma=resul;
                        }
                    }
                }
                cout<<"Closest sum to "<<aux<<" is "<<suma<<".\n";
            }
        }
        cont++;
    }
    return 0;
}
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int c, l, n;
    cin>>c;
    while(c--){
        cin>>l>>n;
        int A[n], minimo=0;
        int v_minimo=l, v_maximo=0;
        for (int i = 0; i < n; i++){
            cin>>A[i];
            v_maximo=max(A[i],v_maximo);
            v_minimo=min(A[i],v_minimo);
            minimo=max(minimo,min(A[i],l-A[i]));
        }
        int maximo=max(v_maximo,l-v_minimo);
        cout<<minimo<<" "<<maximo<<endl;
    }
    return 0;
}
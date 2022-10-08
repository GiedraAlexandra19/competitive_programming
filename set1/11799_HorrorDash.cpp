#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int i=1;
    while(n--){
        int x;cin>>x;
        int max=0;
        while(x--){
            int num;cin>>num;
            max = num>max? num : max;
        }
        cout<<"Case "<<i<<": "<<max<<'\n';
        i++;
    }
}
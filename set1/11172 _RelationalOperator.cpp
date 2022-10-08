#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        long long a,b;cin>>a>>b;
        printf( "%s" , a>b? ">\n" : a<b?"<\n" : "=\n" ) ;
    }
    return 0;
}
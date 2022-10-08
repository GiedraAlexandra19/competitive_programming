#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    while( scanf( "%d %d", &a, &b )!= EOF ){
        c = 2*a*b;
        printf( "%d\n" , c );
    }   
    return 0;
}

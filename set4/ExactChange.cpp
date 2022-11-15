/*#include<iostream>
using namespace std;
int billetes[100];
int limite_valor;
int limite_cant;
void calculo(int n, int objetivo, int pos=0,int cant=0){
    if(objetivo<=0){
        if(objetivo>limite_valor){
            limite_valor=objetivo;
            limite_cant=cant;
        }
        else if(objetivo==limite_valor){
            if(cant<limite_cant)
                limite_cant=cant;
        }
    }
    else{
        for (int i = pos; i < n; i++)
            calculo(n,objetivo-billetes[i],i+1,cant+1);
    }
}
int main() {
	int t,p,n;
    cin>>t;
    while (t--){
        cin>>p>>n;
        limite_valor=INT16_MIN;
        limite_cant=INT16_MAX;
        for (int i = 0; i < n; i++){
            cin>>billetes[i];
        }
        calculo(n,p);
        cout<<p+(limite_valor*-1)<<" "<<limite_cant<<endl;
    }
}*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static const int MAX_PRICE = 10000;

int main()
{  
    int T;
    cin >> T;
    while ( T-- )
    {
        int p, n;
        cin >> p >> n;
        vector<int> coins(n);
        for (int i = 0; i < n; ++i)
            cin >> coins[i];

        
        
        vector<int> dp(MAX_PRICE + 1, 0);
        for (int i = 0; i < n; ++i)
        {
            for (int j = MAX_PRICE; j >= 0; --j)
            {
                if (dp[j] 
                    && j + coins[i] <= MAX_PRICE)
                {
                    
                    dp[j + coins[i]] = (dp[j + coins[i]] == 0 ?
                                        dp[j] + 1 :
                                        min(dp[j + coins[i]], dp[j] + 1));
                }
            }
            if (dp[coins[i]] == 0)
                dp[coins[i]] = 1;
        }
        vector<int>::iterator iter(find_if(dp.begin() + p, 
                                           dp.end(),
                                           bind2nd(greater<int>(), 0)));
        cout << iter - dp.begin() << " " << *iter << endl;
    }
    return 0;
}
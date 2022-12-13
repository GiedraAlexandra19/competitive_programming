#include <bits/stdc++.h>
#include <cstdio>
#include <string>

#define N 1000001  //maximo 1 millon

using namespace std;
int solve(string& str){
	int i, j;
	vector<int> a(N);
	i = 0; j = -1; a[0] = -1;
	while(i<str.length()){
		// no coincide, se regresa al prefijo anterior
		while(j >= 0 && str[i] != str[j]) 
				j = a[j];
			i++; 
			j++;
			a[i] = j;
	}
	return j; //devuelve la longitud
}
int main(){
	string s;
	
	while(getline(cin,s), s!="."){
		int lon=solve(s);
		int min=s.length()-lon;
		if(s.length() % min) printf("1\n");
		else printf("%d\n", s.length() / min); //numero de repeticiones
	}

	return 0;
}
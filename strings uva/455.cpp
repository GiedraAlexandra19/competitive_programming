#include <cstdio>

#define N 150

int main()
{
	int i, j, n;
	int a[N];
	char str[N];

	scanf("%d", &n);
	fgets(str, sizeof(str), stdin); //leer cadena, alamacena en str y dirige con stdin
	while(n--){
		fgets(str, sizeof(str), stdin); 
		fgets(str, sizeof(str), stdin);

		// KMP-busqueda de subcadenas simples
		i = 0; j = -1; a[0] = -1;
		while(str[i] != '\n'){
			while(j >= 0 && str[i] != str[j])
				j = a[j];
			a[++i] = ++j;
		}

		printf("%d\n", i % (i - j) ? i : i - j);
		if(n) putchar('\n');
	}

	return 0;
}

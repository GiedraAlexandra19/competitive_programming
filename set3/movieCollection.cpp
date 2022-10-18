#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<queue>
#include<map>
int arr[100010]; 
int c[200010];  
int n, m;

int lowbit(int x)
{
    return x & (-x);
}

int sum(int end_)
{
    int sum = 0;
    while (end_ > 0)
    {
        sum += c[end_];
        end_ -= lowbit(end_);
    }
    return sum;
}

void add(int i, int elem)
{
    while (i <= n + m)
    {
        c[i] += elem;
        i += lowbit(i);
    }
    return;
}

int main()
{
    int t, i, a;
    scanf("%d", &t);
    for (; t > 0; t--)
    {
        memset(arr, 0, sizeof(arr));
        memset(c, 0, sizeof(c));
        scanf("%d%d", &n, &m);
        for (i = m + 1; i <= m + n; i++) 
        {
            add(i, 1);      
            arr[i - m] = i; 
        }
        int min_ = m, flag = 0;
        for (i = 0; i < m; i++)
        {
            scanf("%d", &a);
            if (flag) 
            {
                printf(" ");
                flag = 1;
            }
            printf("%d", sum(arr[a] - 1)); 
            add(arr[a], -1);               
            arr[a] = min_--;              
            add(arr[a], 1);               
            flag = 1;
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>
int factor(int n){
        if (n==1) return 1;
        return n*factor(n-1);
    }

int main()
{
    int n=5;
    int m=factor(n);
    printf("factorial %d = %d\n",n,m);
    return 0;
}

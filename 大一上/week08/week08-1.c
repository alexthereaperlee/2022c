#include <stdio.h>
int main()
{
 int n;
 scanf("%d", &n);

 for(int i=1; i<=n; i++){
    for(int k=1; k<=n; k++){
        if(k<= n-1) printf(" ");
        else printf("*");
    }
    printf("\n");
 }
}

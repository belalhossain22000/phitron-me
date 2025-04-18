#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    
    int posSum=0;
    int negSum=0;

    for (int i = 0; i < n; i++)
    {
       if(a[i]>0){
        posSum+=a[i];
       }else{
        negSum +=a[i];
       }
    }
    
    printf("%d %d",posSum,negSum);
    
    return 0;
}
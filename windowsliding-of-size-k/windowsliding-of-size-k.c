#include <stdio.h>

int main() {
    int i,j,max=0,sum,a[6]={3,5,9,4,1,2},n=6,k=3;
    for(i=0;i<=n-k;i++)
    {
        sum=0;
        for(j=i;j<k+i;j++)
        {
            sum+=a[j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("\nMax=%d",max);
    return 0;
}
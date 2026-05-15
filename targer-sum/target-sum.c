
#include <stdio.h>

int main() {
    int a[20],i,n,complement;
    int map[100];
    for(i=0;i<100;i++)
    {
        map[i]=-1;
    }
    printf("\nEnter the number of array elements\n");
    scanf("%d",&n);
    printf("\nEnter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        complement=10-a[i];
        if(map[complement] != -1)
            printf("%d and %d",map[complement],i);
        map[a[i]]=i;
    }
    return 0;
}
// Online C compiler to run C program online
#include <stdio.h>

int main() {
    const int kc=6174;
    int i,n, newNum, ascn=0,descn=0,arr[20],count=0;
    void asc(int arr[20]);
    void desc(int arr[20]);
    
    // 1. Enter the number
    printf("Enter a four digits number:\n");
    scanf("%d",&n);
    do{
        ascn=0;
        descn=0;
    // 2. get the digits in array
    for(i=0;i<4;i++)
    {
        arr[i]=n%10; 
        n=n/10;
    }
    
    printf("Digits: ");
    for(i=0;i<4;i++){
    printf("%d,",arr[i]);
    }
    printf("\n\n");
    
    // 3. get the asc of the digits
    asc (arr);
    for(i=0;i<4;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    // 4. construct the no. of the asc array
    for(i=0;i<4;i++)
    {
        ascn=ascn*10 + arr[i];
    }
    printf("%d\n",ascn);
    
    // 5. get the desc of the digits
    desc(arr);
    for(i=0;i<4;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    
    
    // 6. onstruct the no. of the desc array
    for(i=0;i<4;i++)
    {
        descn=descn*10 + arr[i];
    }
        printf("%d\n",descn);

    // 7. get new number (desc no. - asc no.)
    newNum=descn-ascn;
    printf("\n%d\n",newNum);
    // 8. compare new number with kc constant
    if(newNum==kc)
    {
        count++;
        printf("\nCount is %d\n",count);
        break;
    }
    else
    {
        count++;
        n=newNum;
    }
   } while(newNum != kc);
    return 0;
}


void asc(int arr[20])
{
int j,k,temp;
for(j=0;j<4;j++)  /*ascending*/
    {
        for(k=j;k<4-1;k++)
        {
            if(arr[j]>arr[k+1])
            {
               temp=arr[j];
               arr[j]=arr[k+1];
               arr[k+1]=temp;
            }
        }
    }
}


void desc(int arr[20])
{
   int j,k,temp;
   for(j=0;j<4;j++)  /*descending*/
    {
        for(k=j;k<4-1;k++)
        {
            if(arr[j]<arr[k+1])
            {
               temp=arr[j];
               arr[j]=arr[k+1];
               arr[k+1]=temp;
            }
        }
    }
}
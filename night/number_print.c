#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);

    for (int i=0;i<n;i=i+1)
    {
        if (i%2==0)
        {
            for (int j=0;j<=4;j=j+1)
                printf("%d ",5*i+1+j);
            printf("\n");
        }
        else
        {
            for (int j=4;j>=0;j=j-1)
                printf("%d ",5*i+1+j);
            printf("\n");
        }
    }
    
    return 0;
}
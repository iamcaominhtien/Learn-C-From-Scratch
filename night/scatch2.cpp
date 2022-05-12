#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int d=12;
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<10;j++)
        {
            printf("%10d",i*j);
        }
        printf("\n");
    }
}
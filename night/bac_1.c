#include <stdio.h>
#include <math.h>

int main()
{
	int a,b;
	printf("Nhap vao hai so a & b: ");
    scanf("%d%d",a,&b);

	if (a=0)
    {
        if (b==0)
        {
            printf("Phuong trinh co vo so nghiem");
        }
        else
        {
            printf("Phuong trinh vo nghiem");
        }
    }
    else
    {
        double x=-b/a;
        printf("Phuong trinh co nghiem x = %.2lf",x);
    }

    return 0;
}

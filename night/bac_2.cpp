// Khai bao thu vien 
// Thu vien nhap xuat chuan
#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	while (1)
	{
		//In thong bao ra man hinh: prompt
		printf("Nhap vao ba so a, b, c: ");
		//Nhap tu ban phim
		scanf("%d%d%d",&a,&b,&c);
		double d=b*b-4*a*c;

		//Cau dieu kien
		if (d==0){
			double x=-b/(2*a);
			printf("Phuong trinh co nghiem kep x = %lf\n",x );
		} 
		else{
			if (d>0){
				double x1=(-b+sqrt(d))/(2*a);
				double x2=(-b+sqrt(d))/(2*a);
				printf("Phuong trinh co 2 nghiem phan biet: \n\t");
				printf("x1 = %.2lf   x2 = %.2lf",x1,x2);
			}
			else{
				printf("Phuong trinh da cho vo nghiem");
			}
		}

		printf("\n");
	}
	
	return 0;
}
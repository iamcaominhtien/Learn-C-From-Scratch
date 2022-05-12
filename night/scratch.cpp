#include <stdio.h>
#include <math.h>
#include <bits/stdc++.h>
#include <limits>
using namespace std;

int main()
{
    //Char: 1 bytes
    char c=97;
    printf("Char: %c\n",c);

    //Int: 4 bytes
    int a=2147483648;
    printf("Int: %d\n",a);

        //Int: heximal
    int a1=0xa9;
    printf("Hexa: %d\n",a1);

    //Short: 2 bytes
    short b=32769;
    printf("Short: %d\n",b);

    //Long: 4 bytes
    long d=2147483647;
    printf("Long: %d\n",d);

    //Long long int: 8 bytes
    long long int e=9223372036854775807;
    printf("Long long int: %lld\n",e);

    //float 
    printf("Float: %f",std::numeric_limits<float>::max());
    printf("\t~10^%.1f\n",log10(std::numeric_limits<float>::max()));

    //double
    printf("Double: %lf",std::numeric_limits<double>::max());
    printf("\t~10^%.1f\n",log10(std::numeric_limits<double>::max()));

    //double
    long double l=std::numeric_limits<long double>::max();
    cout<<l<<endl;

    //UNSIGHNED
    unsigned int u_a_max=std::numeric_limits<unsigned int>::max();
    unsigned int u_a_min=std::numeric_limits<unsigned int>::max();
    printf("%u - %u\n",u_a_min,u_a_max);

    unsigned long long int u_la_max=std::numeric_limits<unsigned long long int>::min();
    unsigned long long int u_la_min=std::numeric_limits<unsigned long long int>::max();
    printf("%llu - %llu\n",u_la_min,u_la_max);

    //BIT
        //Dich trai n bit -> *2n
    printf("Dich trai n bit: %d\n",10<<2);
        //Dich phai n bit: -> /(2n)
    printf("Dich phai n bit: %d\n",100>>2);

    //TOAN TU TRONG C
        //Toan tu phay
    int x=15;
    x=(x++,x*2);
    printf("Toan tu phay: %d\n",x);

        //Toan tu phan tram
    printf("int, long: %d\n",15%7);
    printf("float, double: %f\n",fmod(15,7));
}
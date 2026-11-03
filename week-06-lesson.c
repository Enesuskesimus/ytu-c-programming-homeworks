#include <stdio.h>
#include <math.h>

//int topla(int x, int y);

int buyukBul(int x, int y);

int main(){
    /*
    double c1 = 13.0, d = 3.0, f= 4.0;

    printf("%.2f\n", sqrt(c1 + d * f));
    printf("%.1f\n", ceil(4.1));
    printf("%.1f\n", floor(-4.1));
    printf("%.1f\n", pow(3,4));
    printf("%.1f\n", fabs(-2.5));
    printf("%.1f\n", fmod(10.0, 3.0));*/
    /*
    int sayi1, sayi2;

    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);

    int sonuc = topla(sayi1, sayi2);

    printf("Oha sonuc: %d", sonuc);*/

    int sayi1, sayi2;

    printf("1. sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("Oha en buyuk: %d", buyukBul(sayi1, sayi2));
    return 0;
}
/*
int topla(int x, int y){
return x + y;
}*/


int buyukBul(int x, int y){
if(x>=y) return x;
else return y;
//return x >= y ? x : y;
}


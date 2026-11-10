#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int factorial(int x){

    if (x == 1 || x == 0)return 1;

    return x * factorial(x-1);
}
int main()
{
    /*
    int x = rand();

    printf("%d \n", x);

    int y = rand();

    printf("%d \n", y);

    int random;

    for (int i = 0; i< 100; i++)
    {
        random = rand();

        printf("%d \n");
    }
    */
/*
    int baslangic;

    printf("Tohum gir (seed): ");
    scanf("%d", &baslangic);

    srand(baslangic);

    printf("%d", 1 + rand() % 6);*/

    /*

    int piyango = 0;
    int hane;


    srand(time(NULL)); //seedi zamana birakiyoz

    for(int i = 0; i<8; i++){

        hane = rand()%10;

        printf("%5d", hane);
    }
    */
    /*

    enum trafik {kirmizi,sari, yesil};

    enum trafik isik = sari;

    printf("%d", isik);
    */

/*
    enum trafik {kirmizi,sari, yesil};

    enum trafik isik;

    printf("Isigin rengini giriniz,\nKirmizi 0\nSari 1\nYesil 2\nIsik: ");

    scanf("%d", &isik);

    if(isik == kirmizi){ printf("Sakina gecme...\n");}
    else if(isik == sari){ printf("Gececen hazirdan...\n"); }
    else if(isik == yesil){ printf("RUUUUUUUUUUNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN...\n");}
    else {printf("Hatali secim\n");}

        if(isik == 0){ printf("kirmizi...\n");}
    else if(isik == 1){ printf("sari...\n"); }
    else if(isik == 2){ printf("yesil...\n"); }
    else {printf("Hatali secim\n");}


    printf("%d", isik);*/
/*
    srand(time(NULL));

    printf("%d", rand());*/

    int a;
    printf("Faktoriyeli alinacak sayiyi giriniz: ");
    scanf("%d", &a);
    printf("%d", factorial(a));

}

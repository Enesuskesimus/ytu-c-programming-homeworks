#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* bu hafta tekrarlar, for ve switch */

    //unsigned int %u ile cagriliyor btw
    /*
        for(int i = 1, j=1; i <= 100; i++, j++){
            printf("Selam yaa i:%d. j:%d \n",i,j);
        }
        // kosul haric virgulle ayirabiliyoz qacokzel*/

    /*

    for(int i = 1; i <= 100; i+=2){printf("%d ",i);}
    printf("\n\n\n");
    for(int i = 100; i >= 1; i--){printf("%d ",i);}
    printf("\n\n\n");
    for(int i = 7; i <= 77; i+=7){printf("%d ",i);}
    printf("\n\n\n");
    for(int i = 2; i<=17; i+=3){printf("%d ",i);}
    printf("\n\n\n");
    for(int i = 44; i>= 0; i-=11){printf("%d ",i);}
    printf("\n\n\n");
    int sum = 0;
    for(int i = 2; i <=100; i+=2){sum += i;}
    printf("Oha toplami: %d", sum);

    //offf cok uykum yaaarrr
    */
    /*
        int selam = pow(5,2);
        printf("%d", selam);
        */
    /*
    a: total para
    p: ana para
    r: getiri orani
    n: kac kere */
    /*

    int n = 10, mamaMoney = 1000;
    float r = 0.05;
    float totalMoney = mamaMoney * pow(1+r,n);
    printf("%.2lf paran var foncu seni",totalMoney);
    */


    // switch - case anlatıldı

    int bakiye = 1000; //TL
    int tutar, islem;
    printf("Isleminizi secin: \n1.Para cekme \n2.Para yatirma \n3.Havale yapma \n4.Bakiye sorgulama \n5.Iptal \nIslem:");
    scanf("%d", &islem);

    switch(islem)
    {
    case 1:
        printf("Bakiyeniz: %d \n", bakiye);
        printf("Cekeceginiz tutari giriniz: ");
        scanf("%d", &tutar);

        if(tutar<=0)
        {
            printf("yanlis tuslama elinin ayarini..");
        }
        else if(tutar > bakiye)
        {
            printf("Yetersiz bakiye");
        }
        else
        {
            bakiye-=tutar;
            printf("Parani al git, kalan bakiyen: %d",bakiye);
        }
        break;
    case 2:
        printf("Bakiyeniz: %d \n", bakiye);
        printf("Ne kadar yatircan: ");
        scanf("%d", &tutar);
        if(tutar<=0)
        {
            printf("Yanlis tuslama.\n");
        }
        else
        {
            bakiye += tutar;
            printf("\nGuncel Bakiyen: %d \nDefol simdi!", bakiye);
        }
        break;
    case 3:
        printf("Bakiyeniz: %d \n", bakiye);
        printf("Havale edeceginiz tutari giriniz: ");
        scanf("%d", &tutar);

        if(tutar<=0)
        {
            printf("yanlis tuslama elinin ayarini..");
        }
        else if(tutar > bakiye)
        {
            printf("Yetersiz bakiye");
        }
        else
        {
            bakiye-=tutar;
            printf("Paran aktarildi hadi git. \nkalan bakiyen: %d",bakiye);
        }
        break;
    case 4:
        printf("Bakiyeniz: %d \n", bakiye);
        break;
    case 5:
        printf("Ok iptal ettim, kart iade");
        break;
    default:
        printf("Yanlis tusladin, kustum(turkcekarakterle)");
        break;
    }

}

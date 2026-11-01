//Enes KESIMLER 26065620
#include <stdio.h>

int main()
{
    int count = 0,  countLimit = 10;
    double maxCost = -1, finalCost, discRate = 0.1, prodCost, discMin = 500,totalCost = 0;

    printf("--- Market Kasasi ---\nBitirmek icin 0 giriniz\n\n");

    do{
        printf("%d. urunun fiyatini giriniz: ", ++count);
        scanf("%lf", &prodCost);

        if(prodCost == 0){count--; break;}
        if(prodCost < 0){count--; printf("Gecersiz Fiyat!\n"); continue;}
        totalCost += prodCost;
        if(maxCost < prodCost){maxCost = prodCost;}
    }while(count < countLimit);
    finalCost = totalCost > discMin ? totalCost * (1 - discRate) : totalCost;
    printf("\n\n--- Fis ---\n");
    if(count == 0){printf("Hic urun okutulmadi."); return 0;}
    if(count == countLimit){printf("Sepet Limiti Doldu!\n");}
    printf("Urun Sayisi: %d\nToplam: %.2f TL\nEn pahali urun: %.2f TL\nIndirim: %.2f TL\nOdenecek Tutar: %.2f TL", count, totalCost, maxCost,totalCost - finalCost, finalCost);
    return 0;
}



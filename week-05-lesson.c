#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    /*printf("Hello world!\n");
    return 0;*/
    /*
    unsigned int savac = 1;
    do{
        printf("%u ", savac);
    }while(++savac <=10);

    int x = 100;
    while(x<10){printf("while \n");}
    do{printf("do-while\n");}while(x<10); */
    /*
    int savi = 1;

    do{
        printf("%d\n", savi);
        savi++;
    }while(savi <= 10); */

    /*
    int total = 0, number, counter = 0;
    printf("Sifir girene kadar sayilar toplanir \n");
    do{
        //puts("Bir sayi giriniz");
        printf("%d. sayiyi giriniz: ", ++counter);
        scanf("%d", &number);
        total += number;
    }while(number != 0);

    printf("%d sayinin toplami: %d", --counter,total); */
    /*

    int up = 100, down = 0, total = 0, counter = 0, num;
    float avarage = 0;

    do{
        printf("Bir sayi giriniz: ");
        scanf("%d", &num);
        if(num <= up && num >= down){
            printf("Girilen sayi: %d \n", num);
            total += num;
            counter++;
        }else{
            printf("Gecersiz sayi girisi!\n");
        }
    }while(num <= up && num >= down);
    avarage = (float)total/counter;
    printf("Girilen sayilarin toplami %d, adedi %d, ve ortalamasi %.2f", total,counter,avarage);
    */
    // Mantiksal operatorler

    //sayi++ ve ++sayi farkli

    int score, up = 100, down = 0, counter = 1, total = 0, maxScore = -1;
    float avarage;
    bool verifedNote;
    printf("-1 girene kadar sayilar toplanir.\n");
        do{
            //puts("Bir sayi giriniz");
            printf("%d. notu giriniz: ", counter);
            scanf("%d", &score);
            verifedNote = score<=up && score >= down;
            if(verifedNote){
                total += score;
                counter++;
                if(maxScore<score){maxScore = score;}
            }
            else if(score != -1){puts("Gecersiz not!, Lutfen tekrar girin");}
        }while(score != -1);
        puts("-1 girildi, islem sonlandirilip hesaplaniyor!\n");
        if(maxScore == -1){puts("Hic not girilmedi");}
        else{
            avarage = (float)total/--counter;
            printf("%d notun toplami: %d, ortalamasi: %.2f, maksimum not: %d", counter,total,avarage,maxScore);
        }


}

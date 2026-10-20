#include <stdio.h>

int main()
{
    /*
    char ad[20];
    printf("Adinizi girer misiniz: \n");

    scanf(" %19[^\n]", ad);
    printf("Adiniz: %s", ad);*/

    /*
    int counter, sum = 0;
    float avarage_note;
    printf("Sinifinizda kac ogrenci mevcut?: \n");
    scanf("%d", &counter);
    printf("%d ogrencinin notunu giriniz. \n\n", counter);

    int i = 1;
    while(i <= counter)
    {
        int temp = 0;
        printf("%d. ogrencinin notunu giriniz: ", i);
        scanf("%d", &temp);

        while(temp > 100 || temp < 0)
        {
            printf("gecersiz not girdiniz, %d. ogrencinin notunu tekrar giriniz.", i);
            scanf("%d", &temp);
        }
        sum += temp;
        i++;
    }

    avarage_note = (float)sum/counter;
    printf("Sinifinizdaki kisi sayisi: %d \nSinifin ortalamasi: %.2f", counter, avarage_note);*/

    /*
    int counter = 1, sum = 1;
    float avarage_note;

    printf("Siniftaki kisilerin notunu giriniz, bitince \"-1\" yaziniz \n\n");

    int sentinel = 1;
    while(sentinel != -1)
    {
        printf("%d. ogrencinin notunu giriniz: ", counter);
        scanf("%d", &sentinel);

        while(sentinel > 100 || sentinel < -1)
        {
            printf("gecersiz not girdiniz, %d. ogrencinin notunu tekrar giriniz.", counter);
            scanf("%d", &sentinel);
        }
        counter++;
        sum += sentinel;
    }
    counter-=2;
    if(counter == 0){printf("Hic not girilmedi\n"); return 0;;}
    avarage_note = (float)sum/counter;
    printf("Sinifinizdaki kisi sayisi: %d \nSinifin ortalamasi: %.2f", counter, avarage_note);*/
    /*
    int a = 3;
    int b = ++a;
    int c = a++;
    printf("a: %d b: %d c:%d",a,b,c); */

    //condition : value1 : value2


    //Motor yağı sıcaklık alarmı
    int kritik = 120, yuksek = 100, normal = 80; //degree C
    int T;
    printf("Motor sicakligini giriniz: \n");
    scanf("%d", &T);

    if(T < normal)
        puts("SOGUK: Isinma bekleniyor");
    else if (T < yuksek)
        puts("NORMAL calisma");
    else if(T < kritik)
        puts("YUKSEK: yuku azalt");
    else
        puts("KRITIK!: motoru durdur piston asagi");
}

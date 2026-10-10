// Enes KESİMLER 26065620
// Kademeli Elektrik Fatırası _ Hw2
#include <stdio.h>

int main()
{
    //printf("Hello world!\n");

    // İstenilen girişler
    char userName[20];
    char userSurname[20];
    char address[150];
    double monthlyUsage; //kWh

    // Gerekli Değişkenler
    double invoiceAmountNoTax;
    double taxAmount;
    double invoiceAmountWithTax;
    double cheapPriceLimit = 150; //kWh
    double midPriceLimit = 300; //kWh
    double cheapPrice = 1.5; //TL
    double midPrice = 2; //TL
    double expensivePrice = 3; //TL
    double taxRate = 0.2;
    char invalidInput_tr[25] = "Gecersiz tuketim degeri!";

    // Tanıtım ve değerleri isteme
    printf("KADEMELI ELEKTRIK FATURASI HESAPLAYICI \n\n\n");

    printf("Lutfen sizden istenilen bilgileri giriniz. \n\n");
    printf("Adiniz: ");
    fgets(userName, sizeof(userName),stdin); //ödeve bu fonksiyon eklenmemiş ama salı sorucam burayı
    //scanf(" %19[^\n]", userName); kullanılabilir dedi gpt hazretleri
    printf("Soyadiniz: ");
    fgets(userSurname, sizeof(userSurname),stdin);
    printf("Adresiniz: ");
    fgets(address, sizeof(address),stdin);
    printf("Aylik elektrik tuketiminiz (kWh): ");
    scanf("%lf", &monthlyUsage);

    if(monthlyUsage < 0){printf(invalidInput_tr); return 0;}

    //Tutar hesaplama algoritması
    if(monthlyUsage <= cheapPriceLimit){invoiceAmountNoTax = monthlyUsage*cheapPrice;}
    else{
            invoiceAmountNoTax = cheapPriceLimit * cheapPrice;
            invoiceAmountNoTax += (monthlyUsage-cheapPriceLimit)*midPrice;
            if(monthlyUsage > midPriceLimit){invoiceAmountNoTax += (monthlyUsage - midPriceLimit) * (expensivePrice-midPrice);}
        }

    taxAmount = taxRate * invoiceAmountNoTax;
    invoiceAmountWithTax = taxAmount + invoiceAmountNoTax;

    printf("Ad: %sSoyad: %sAdres: %sTuketim: %.2lf kWh \nAra Toplam: %.2lf TL \nKDV: %.2lf TL \nOdenecek Tutar: %.2lf TL",
           userName,userSurname,address, monthlyUsage, invoiceAmountNoTax,taxAmount,invoiceAmountWithTax);
    return 0;
}



//Enes KESIMLER 26065620
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int selectedValue;
    printf("Muhendislik Hesap Programi\n\n");
    printf("Lutfen seceneklerden birini seciniz\n1. Gerilme ve Emniyet Kontrolu\n2. Mil Torku Hesabi\n3. Yay Kuvveti Hesabi\n4. Sicaklik Donusumu\n5. Cikis\nSeciminiz: ");
    scanf("%d", &selectedValue);
    while(1)
    {
        switch(selectedValue)
        {
        case 1:
            printf("\nGerilme ve Emniyet Kontrolu Secildi!\n");
            printf("Akma dayanimi 250MPa olarak kabul edilir.\nLutfen sizden istenen degerleri giriniz.\n");
            double yieldPoint = 250.0,tensileForce, csArea, tensile, foSafety;
            printf("Cekme kuvvetini giriniz (N): ");
            scanf("%lf", &tensileForce);
            printf("Kesit alanini giriniz (mm^2): ");
            scanf("%lf", &csArea);
            if(csArea<=0)
            {
                printf("Gecersiz deger!");
                return 0;
            }
            tensile = tensileForce/csArea;
            printf("Gerilme: %.2f MPa",tensile);
            if(tensile>yieldPoint)
            {
                printf("\nParca akar, kesit buyutulmelidir.");
                return 0;
            }
            foSafety = yieldPoint/tensile;
            printf("\nGuvenlik katsayisi %.2f'dir", foSafety);
            return 0;
            break;
        case 2:
            printf("\nMil Torku Hesabi Secildi!");
            printf("\nLutfen sizden istenen degerleri giriniz.\n");
            double power, rev, torque;
            printf("Motor gucunu girin (kW): ");
            scanf("%lf", &power);
            printf("Devrinizi girin (rpm): ");
            scanf("%lf", &rev);
            if(rev<=0)
            {
                printf("Gecersiz deger!");
                return 0;
            }
            torque = 9550*power/rev;
            printf("Torkunuz %.2f N*m",torque);
            return 0;
            break;
        case 3:
            printf("\nYay Kuvveti Hesabi Secildi!");
            printf("\nLutfen sizden istenen degerleri giriniz.\n");
            double sConstant, sExtension, sForce;
            printf("Yay sabitini girin (N/mm): ");
            scanf("%lf", &sConstant);
            printf("Yay uzamasini girin (mm): ");
            scanf("%lf", &sExtension);
            sForce = sConstant * sExtension;
            printf("Yay kuvveti: %.2f N", sForce);
            return 0;
            break;
        case 4:
            printf("\nSicaklik Donusumu Secildi!");
            double dC, dF, kelvin;
            printf("\nLutfen derece degerini giriniz.\n");
            scanf("%lf", &dC);
            dF = dC * 1.8 + 32;
            kelvin = dC + 273.15;
            printf("%.2f Derecenin nin karsiliklari: %.2f Fahrenheit, %.2f Kelvin",dC,dF,kelvin);
            return 0;
            break;
        case 5:
            printf("Program sonlandirildi!");
            return 0;
            break;
        default:
            printf("Yanlis secim!\n\nLutfen seceneklerden birini seciniz\n1. Gerilme ve Emniyet Kontrolu\n2. Mil Torku Hesabi\n3. Yay Kuvveti Hesabi\n4. Sicaklik Donusumu\n5. Cikis\nSeciminiz: ");
            scanf("%d", &selectedValue);
            break;
        }
    }
}
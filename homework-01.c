// 26065620
// Enes KESİMLER

#include <stdio.h>

int main() {

    //sayılar ni
    int n1;
    int n2;
    int n3;

    // Karşılama ve tanıtım

    printf("First HW | Basic Calculator \n \n \n");
    
    printf("Enter 3 non-zero integers, calculation will perform automitcly. \n \n");


    //sayı girişleri

    printf("Enter first number (n1): ");
    scanf("%d", &n1);

    printf("Enter second number (n2): ");
    scanf("%d", &n2);

    printf("Enter third number (n3): ");
    scanf("%d", &n3);
    
    /* hesaplamalar için gerekli tanımlamalar ve hesaplama işlemleri. 1 ve 3 arasında herhangi bir işlem ödevde istenmediği için tanımlanmamıştır. Hata ayıklama sistemi henüz derste işlenmediği için eklenmedi, hatalı input girişi hesaplama hatalarına yol açabilir. 
    */
    int sum12 = n1 + n2;
    int sum23 = n2 + n3;

    /* ödevde fark denilmiş, <stdlib.h> headarı ile abs() kullanabilirdi fakat derste işlenmediği için yapılmadı */
    int sub12 = n1 - n2;
    int sub23 = n2 - n3;

    int pro12 = n1 * n2;
    int pro23 = n2 * n3;

    int quo12 = n1 / n2;
    int quo23 = n2 / n3;

    int mod12 = n1 % n2;
    int mod23 = n2 % n3;


    
    // Sonuçları yazdırma
    printf(" \n\n\n     Calculation Done! \n\nResults: \n");
    printf("n1 + n2 = \\%d \nn1 - n2 = \\%d \nn1 * n2 = \\%d \nn1 / n2 = \\%d + (\\%d/\\%d) \n\n", sum12, sub12, pro12, quo12, mod12, n2);
    printf("n2 + n3 = \\%d \nn2 - n3 = \\%d \nn2 * n3 = \\%d \nn2 / n3 = \\%d + (\\%d/\\%d) \n\n", sum23, sub23, pro23, quo23, mod23, n3);
    
}

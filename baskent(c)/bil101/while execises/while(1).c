/* Kullanıcıdan kilo değerleri alarak, girilen değerleri hafif, orta ve ağır olarak sınıflandıran program. İlk olarak negatif kilo girişini kontrol eder ve negatif bir değer girilirse kullanıcıyı doğru bir giriş yapması için uyarır. Sonrasında kullanıcı sıfır girene kadar kilo değerlerini almaya devam eder. 0-30 kg arası "hafif", 30-70 kg arası "orta" ve 70 kg üzeri "ağır" sınıfına dahil edilir. Program sonunda her sınıfa dahil olan kişi sayısını ekrana yazdırır. */
#include <stdio.h>
int main(){
    int kilo;
    int hafif=0;
    int orta=0;
    int agır=0;
    printf("kilo giriniz:");
    scanf("%d",&kilo);
    while (kilo < 0){
        printf("yanlış kilo girdiniz:");
        scanf("%d",&kilo);
    }
    while (kilo!=0){
        printf("kilo giriniz:");
        scanf("%d",&kilo); 
        if(kilo<30){
            hafif++;
        }
        else if(kilo<=50 || kilo<70){
            orta++;
        }
        else if(kilo>70){
            agır++;
        }
    }
    printf("%d hafif,%d orta,%d agır siklet vardır",hafif,orta, agır);
    return 0;
}
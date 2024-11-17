/* Kullanıcıdan sürekli olarak marka ve fiyat bilgisi alarak, girilen marka türlerine göre sayım yapan program. Kullanıcı "111" girene kadar döngü devam eder. Programda marka türleri "1", "2", "3" ve "4" olarak belirlenmiştir. Girilen her marka türü için ilgili sayacın değeri artırılır. Program sonunda, en fazla girilen marka türünü bulur ve bu değeri ekrana yazdırır. */
#include <stdio.h>
int main(){
    int marka,r,m,w,f,h,eb;
    float fiyat;
    printf("111 girince çıkıyor");
    scanf("%d",&marka);
    while(marka!=111){
        printf("devamke");
        scanf("%d %f",&marka,&fiyat);
        if(marka==1){
            r++;
        }
        else if(marka==2){
            m++;
        }
        else if(marka==3){
            h++;
        }    
        else if(marka==4){
            f++;
        }
    }
    if(r>m){
        eb=r;
    }
    if(r>h){
        eb=r;
    }
    if(r>f){
        eb=r;
    }
    if(m>h){
        eb=m;
    }  
    if(m>f){
        eb=m;
    }
    if(h>f){
        eb=h;
    }
    printf("%d",eb);

    return 0;
}
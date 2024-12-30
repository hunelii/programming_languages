/* Bu program, bir sayının belirli bir koşula göre hesaplanması için rekürsif bir fonksiyon (fun) kullanır. 
Fonksiyon şu şekilde çalışır:
- Eğer `n > 100` ise, `n - 10` değeri döndürülür.
- Aksi takdirde, fonksiyon kendini tekrar çağırarak `fun(n + 11)` işlemini yapar ve çıkan sonucu bir daha `fun` ile işler.

Örneğin, `fun(95)` çağrıldığında, `n` başlangıçta 100'den küçük olduğu için `fun(fun(95 + 11))` (yani `fun(fun(106))`) çalışır. 
Bu rekürsif süreç, `n > 100` koşulu sağlanana kadar devam eder. Sonuçta, bu programın çıktısı `91` olacaktır. 

Bu, **McCarthy 91 Fonksiyonu** adı verilen klasik bir rekürsif algoritma örneğidir. */

#include <stdio.h>
int fun(int n){
    if (n > 100){
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}

int main(){
    printf("%d",fun(95));
    return 0;
}
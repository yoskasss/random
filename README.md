# Random Kütüphanesi

`random.h` basit bir rastgele sayı üretim fonksiyonu içeren bir C kütüphanesidir. Bu kütüphane, ANSI C'ye uygun bir rastgele sayı üretim algoritması sunar. 

## Kullanım
`random()` fonksiyonunu kullanarak 0 ile 32767 arasında bir rastgele sayı üretebilirsiniz. Ayrıca, `rand_seed` değişkeni üzerinde değişiklik yaparak üretilen rastgele sayıları kontrol edebilirsiniz.

### Adımlar:
1. `random.h` dosyasını projenize dahil edin.
2. `rand_seed` değişkenine istediğiniz başlangıç tohumunu atayın (opsiyonel).
3. `random()` fonksiyonunu çağırarak rastgele bir sayı alın.

---

## Örnek Kullanım

### **main.c**
```c
#include <stdio.h>
#include "random.h"

int main() {
    // Rastgele sayı tohumunu ayarlayın
    rand_seed = 12345;

    printf("Rastgele sayılar:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", random());
    }

    return 0;
}
```
### Çıktı

Rastgele üretilmiş sayılar, başlangıç tohumu ve algoritmaya bağlı olarak değişir. 


Örneğin:
```
Rastgele sayılar:
1804289383
846930886
1681692777
1714636915
1957747793
```
## Kütüphane Detayları
### random() Fonksiyonu

  Girdi: Yok

  Çıktı: int türünde rastgele bir sayı (0 ile 32767 arasında)
  
  Açıklama: random() fonksiyonu, global rand_seed değişkenini güncelleyerek rastgele sayı üretir. Aynı başlangıç tohumuyla aynı sayı dizisini üretir.
  

### rand_seed Değişkeni

   Rastgele sayı üretiminde kullanılan tohumdur.
   
   Aynı tohum değerleri aynı rastgele sayı dizisini üretir.
   

#ifndef RANDOM_H
#define RANDOM_H

// Rastgele sayı üretici fonksiyonun prototipi
int random();
    unsigned int rand_seed = 1; // Global rastgele sayı tohumu

    int random() {
        rand_seed = rand_seed * 1103515245 + 12345; // Rastgele sayı üretim algoritması
        return (unsigned int)(rand_seed / 65536) % 32768;
    }
#endif // RANDOM_H

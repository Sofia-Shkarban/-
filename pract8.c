#include <stdio.h>
#include <string.h>
unsigned long factorial(int n) {
    unsigned long result =1;
    for (int i=2; i<=n; i++) {
        result *= i;
    }
    return result;
}
unsigned long countAnagrams(const char*word) {
    int freq[256] ={0};
    int len =strlen(word);
    for (int i=0; i<len; i++) {
        freq[(unsigned char)word[i]]++;
    }
    unsigned long total =factorial(len);
    for (int i=0; i<256; i++) {
        if (freq[i]>1) {
            total/=factorial(freq[i]);
        }
    }
    return total;
}
int main() {
    char word[100];
    printf("Введіть слово: ");
    scanf("%s", word);
    if (strlen(word)>14) {
        printf("Слово не повинно перевищувати 14 букв!\n");
        return 1;
    }
    unsigned long result =countAnagrams(word);
    printf("Кількість анаграм: %lu\n", result);
    return 0;
}

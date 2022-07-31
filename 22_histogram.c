#include <stdio.h>

int main(){
    int n_word[21]; 
    int w_length, n_words, w_max;
    char c;

    w_length = n_words = w_max = 0;
    for (int i = 0; i < 21; ++i) n_word[i] = 0;

    while((c = getchar()) != EOF) {
        if (c != '\n' && c != ' ') ++w_length;
        else if (w_length > 0) {
            w_length = w_length <= 20 ? w_length : 20;
            w_max = w_max < w_length ? w_length : w_max;
            n_word[w_length]++;
            w_length = 0;
            n_words++;
        }
    }

    for (int i = 1; i < w_max; i++){
        if (i < 10) putchar(' ');
        printf("%d: ", i);
        int n = n_word[i];
        n = (n * 100) / n_words;
        for (int j=0; j < n; j++) putchar('#');
        printf(" (%d, %d%%)", n_word[i], n);
        putchar('\n');
    }
    printf("Total words: %d\n", n_words);
}

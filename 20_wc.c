#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
    int c, nc, nw, nl, state;

    nl = nw = nc = 0;
    state = OUT;

    while((c = getchar()) != EOF){
        ++nc;
        if (c == '\n'){
            if (state == IN) ++nw;
            state = OUT;
            ++nl;
        }else if (c == ' ') {
            if (state == IN) ++nw;
            state = OUT;
        } else {
            state = IN;
        }

    }

    printf("chars: %d, words: %d, lines: %d\n", nc, nw, nl); 
}

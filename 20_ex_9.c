#include <stdio.h>

int main(){
    int c;
    while((c = getchar()) != EOF) {
        switch(c){
            case '\n':
                //printf("\n");
                putchar('\\');
                putchar('n');
                break;
            default:
                putchar(c);
        }
    }

}

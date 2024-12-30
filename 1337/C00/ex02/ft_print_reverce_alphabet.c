#include <unistd.h>

void ft_print_reverce_alphabet(void){
    char alphabet = 'z';

    while(alphabet >= 'a'){
        write(1, &alphabet, 1);
        alphabet--;
    }
}
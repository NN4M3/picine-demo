#include <unistd.h>

void ft_sort_int_tab(int *tab, int size){
    int temp;

    for(int i = 0; i <= size - 1; i++){
        for(int j = 0; j <= size - 1 - i; j++){
            if(tab[j] < tab[j+1]){
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}
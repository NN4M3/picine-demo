#include <unistd.h>

void ft_sort_int_tab(int *tab, int size){
    int temp;
    int i;
    int j;

    i = 0;
    j = 0;

    while(i < size){
        while(j < size - i){
            if(tab[j] < tab[j+1]){
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
            j++;
        }
        i++;
    }
}
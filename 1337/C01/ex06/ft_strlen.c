#include <unistd.h>

void ft_strlen(char *str){
    int i;

    while(str[i] != '\0'){
        i++;
    }
}

// i guess that works i'm not sure 
// basically it counts how many items in the array and store it to the variable 'i' and then you can print it 
#include <unistd.h>

int ft_str_is_numeric(char *str){
    for(int i = 0; str[i] != '\0'; i++){
        if(!(str[i] >= '0' && str[i] <= '9')){
            return 0;
        }
    }

    return 1;
}
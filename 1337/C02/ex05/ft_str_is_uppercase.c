#include <unistd.h>

int ft_str_is_uppercase(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		if(!(str[i] >= 'A' && str[i] <= 'Z')){
			return  0;
		}
	}

	return 1;
}

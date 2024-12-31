#include <unistd.h>

int ft_str_is_lowercase(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		if(!(str[i] >= 'a' && str[i] <= 'z')){
			return 0;
		}
	}

	return 1;
}

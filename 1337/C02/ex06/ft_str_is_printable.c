#include <unistd.h>

int ft_str_is_printable(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		if(!(str[i] >= ' ' && str[i] <= '~')){
			return 0;
		}
	}

	return 1;
}

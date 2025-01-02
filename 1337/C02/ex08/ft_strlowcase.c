#include <unistd.h>

char *tf_strlowcase(char *str){
	for(int i = 0; str[i] != '\0'; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
	}
	int i;
	i = 0;

	while(str[i] != '\0'){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
		i++;
	}
	return str;
}
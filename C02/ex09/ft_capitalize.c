#include <unistd.h>

char *ft_capitalize(char *str){
	int i;
	int j;
	i = 0;
	j = 0;

	while(str[i] != '\0'){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
		}
		i++;
	}
	
	if(str[j] >= 'a' && str[j] <= 'z'){
		str[j] -= 32;
		j++;
	}
	
	while(str[j] != '\0'){
		if(!(str[j-1] >= 'a' && str[j-1] <= 'z') && !(str[j-1] >= 'A' && str[j-1] <= 'Z')){
			if(str[j] >= 'a' && str[j] <= 'z'){
                str[j] -= 32;
            }
		}
		j++;
	}

    return str;
}

/*#include <stdio.h>

int main(){
    char str[] = "hEllO WorLd! testing this 42school shit:idk if it will work?or-no";

    printf("%s", ft_capitalize(str));

}*/
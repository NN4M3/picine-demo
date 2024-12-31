#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
	for(int i = 0; i < size; i++){
        dest[i] = src[i];
    }
}
/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** funcion which
*/

#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    while (dest[i] != '\0'){
        i++;
    }
    while (src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return &dest[0];
}
/*
int main(void)
{
    char dest[ ] = "Hello ";
    char src[ ] = "world!\n";
    printf(my_strcat(dest, src));
    return 0;
}
*/

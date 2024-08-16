/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** funcion which
*/

#include <stdio.h>

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    while (s1[i] != '\0'){
        if (s2[i] == '\0'){
            return 1;
        }
        i++;
    }
    if (s2[i] == '\0'){
        return 0;
    }
    return -1;
}
/*
int main (void){
    char *str1 = "12345";
    char *str2 = "1234";
    printf("%d\n", my_strcmp(str1, str1));
    printf("%d\n", my_strcmp(str2, str2));
    printf("%d\n", my_strcmp(str1, str2));
    printf("%d\n", my_strcmp(str2, str1));
    return 0;
}
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int string_length(const char* s){
    int len = 0;
    while (*s != '\0'){
        s++;
        len++;
    }

    return len;
}

int string_compare(const char* s1, const char* s2){
    int ascii1 = (int)*s1;
    int ascii2 = (int)*s2;

    while (ascii1 - ascii2 == 0 && *s1 != '\0' && *s2 != '\0'){
        s1++;
        s2++;
        ascii1 = (int)*s1;
        ascii2 = (int)*s2;
    }

    return ascii1 - ascii2;
}

int string_n_compare(const char* s1, const char* s2, int n){
    int ascii1 = (int)*s1;
    int ascii2 = (int)*s2;
    int idx = 1;

    while (ascii1 - ascii2 == 0 && *s1 != '\0' && *s2 != '\0' && idx < n){
        s1++;
        s2++;
        ascii1 = (int)*s1;
        ascii2 = (int)*s2;
        idx++;
    }

    return ascii1 - ascii2;
}

void string_copy(char* dst, char* src){
    while (*src != '\0'){
        *dst = *src;
        src++;
        dst++;
    }     
    
    *dst = '\0';
}

int main(){
    char str[] = "ABC";
    char str2[1];
    strcpy(str2, str);
    printf("%s\n", str2);
    return 0;
}

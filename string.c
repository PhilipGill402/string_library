#include <stdio.h>
#include <string.h>

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

char* string_copy(char* dst, char* src){
    
}

int main(){
    char str[] = "ABC";
    char str2[] = "AB";
    printf("%d\n", string_n_compare(str, str2, 2));
    printf("%d\n", strncmp(str, str2, 2)); 
    return 0;
}

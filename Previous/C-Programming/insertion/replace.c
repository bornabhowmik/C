#include <stdio.h>
#include <string.h>

int main(){
    char str[100] = "Metro Politan";
    char* sub = "Politan";
    char* replace = "City";
    char newstr[100];
    char* ptr;

    ptr = strstr(str, sub);
    if (ptr != NULL) {
        strncpy(newstr, str, ptr-str);
        newstr[ptr-str] = '\0';
        strcat(newstr, replace);
        strcat(newstr, ptr+strlen(sub));
        strcpy(str, newstr);
    }

    printf("%s\n", str);

    return 0;
}

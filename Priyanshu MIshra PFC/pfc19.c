//Program using string functions (strlen, strcpy, strcat, strcmp)
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    // strlen()
    printf("Length of str1: %lu\n", strlen(str1));
    printf("Length of str2: %lu\n", strlen(str2));

    // strcpy()
    strcpy(str3, str1);
    printf("After strcpy, str3: %s\n", str3);

    // strcat()
    strcat(str1, str2);
    printf("After strcat, str1: %s\n", str1);

    // strcmp()
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }

    return 0;
}

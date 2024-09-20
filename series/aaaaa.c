#include <stdio.h>

void xstrcpy(char a[], char b[]);

int main() {
    char s1[100], s2[100];
    printf("Enter the first string: ");
    scanf("%[^\n]%*c", s1); // Read the first string and consume the newline character
    printf("Enter the second string: ");
    scanf("%[^\n]%*c", s2); // Read the second string and consume the newline character

    xstrcpy(s1, s2);    
    printf("Copied string: %s\n", s1);

    return 0;
}

void xstrcpy(char s1[], char s2[]) {
    int i;
    for (i = 0; s2[i] != '\0'; i++) {
        s1[i] = s2[i];
    }
    s1[i] = '\0';
}


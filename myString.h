#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct string {
    char *value;
} string;

void createString(string *x) {
    x->value = malloc(255 * sizeof(char));
}

char* stringToArray(string x) {
    if (x.value == NULL) {
        exit(1);
    }
    return x.value;
}

void setCharAt(int i, string x, char newChar) {
    x.value[i] = newChar;
}

string inputString(char message[], int len) {
    string strForReturning;
    createString(&strForReturning);
    if (len > 255) {
        strForReturning.value = realloc(strForReturning.value, len * sizeof(char));
    }
    char value[len];
    printf("%s", message);
    fgets(value, len, stdin);
    value[strlen(value) - 1] = '\0';
    strcpy(strForReturning.value, value);
    return strForReturning;
}

//print array of characters
void printa(char *message) {
    printf("%s\n", message);
}

//print string
void prints(string message) {
    printf("%s\n", message.value);
}

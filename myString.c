#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "myString.h"

string createString(stringType type, char initValue[]) {
    string x;
    switch (type) {
        case LITTLE:
            x.value = malloc(255 * sizeof(char));
            x.type = type;
            break;
        case MEDIUM:
            x.value = malloc(500 * sizeof(char));
            x.type = type;
            break;
        case BIG:
            x.value = malloc(1000 * sizeof(char));
            x.type = type;
            break;
        case GIANT:
            x.value = malloc(2000 * sizeof(char));
            x.type = type;
            break;
        default:
            printf("invalid type");
            exit(1);
    }
    if (initValue != NULL) {
        if ((sizeof(initValue) / sizeof(initValue[0])) > valueOf(type)) {
            exit(1);
        }
        strcpy(x.value, initValue);
        x.len = sizeof(initValue) / sizeof(initValue[0]);
    } else {
        x.len = 0;
    }
    return x;
}

void setCharAt(int i, string x, char newChar) {
    x.value[i] = newChar;
}

string inputString(char message[], stringType type) {
    int len = valueOf(type);
    string x = createString(type, NULL);

    char input[len];
    printf("%s", message);

    setbuf(stdin, 0);
    fgets(input, len, stdin);

    char value[strlen(input) - 1];

    input[strlen(value) - 1] = '\0';
    for (int i = 0 ; i < strlen(value) - 1 ; i++) {
        value[i] = input[i];
    }
    size_t in = strlen(value) - 1;
    if (value[in] == '\n') {
        value[in] = '\0';
    }
    int len2 = sizeof(value) / sizeof(char);
    x.len = len2;
    strcpy(x.value, value);
    return x;
}

int valueOf(stringType type) {
    switch (type) {
        case LITTLE:
            return 255;
            break;
        case MEDIUM:
            return 500;
            break;
        case BIG:
            return 1000;
            break;
        case GIANT:
            return 2000;
            break;
    }
    exit(1);
}

//print array of characters
void printa(char message[]) {
    printf("%s\n", message);
}

//print string
void prints(string message) {
    printf("%s\n", message.value);
}

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

typedef enum {
    LITTLE,
    MEDIUM,
    BIG,
    GIANT
} stringType;

typedef struct string {
    char *value;
    int len;
    stringType type;
} string;

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
        if (arrayCharSize(initValue) > valueOf(type)) {
            exit(1);
        }
        strcpy(x.value, initValue);
        x.len = arrayCharSize(initValue);
    } else {
        x.len = 0;
    }
    return x;
}

void setCharAt(int i, string x, char newChar) {
    x.value[i] = newChar;
}

string inputString(char message[], stringType type) {
    string x = createString(type, NULL);
    char value[valueOf(type)];
    printf("%s", message);
    fgets(value, valueOf(type), stdin);
    value[strlen(value) - 1] = '\0';
    if (arrayCharSize(value) > valueOf(type)) {
        exit(1);
    }
    x.len = arrayCharSize(value);
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

int size_tToInt(size_t x) {
    return (int) x;
}

//error in this function
/* when i input "yes", and i call this function to get the "yes" size, the returning value is 8, why 8? */
int arrayCharSize(char a[]) {
    return sizeof(a) / sizeof(a[0]);
}

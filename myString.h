#include <string.h>

typedef struct string {
    char value[];
} string;

char[] stringToArray(string x) {
    return string.value;
}

void setCharAt(int i, string x, char newChar) {
    string.value[i] = newChar;
}

int stringToInteger(string x) {
    char numbers[] = "0123456789";
    for (int i = 0 ; i < strlen(x.value) ; i++) {
        for (int j = 0 ; j < 10 ; i++) {
            if (string.value[i] == numbers[j]) {
                return -1;
            }
        }
    }

    return atoi(x.value);
}

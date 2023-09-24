#ifndef MYSTRING_H
#define MYSTRING_H

typedef enum {
    LITTLE,
    MEDIUM,
    BIG,
    GIANT
} stringType;

typedef struct string {
    char *value;
    size_t len;
    stringType type;
} string;

string createString(stringType type, char initValue[]);
void setCharAt(int i, string x, char newChar);
string inputString(char message[], stringType type);
int valueOf(stringType type);
void printa(char message[]);
void prints(string message);

#endif

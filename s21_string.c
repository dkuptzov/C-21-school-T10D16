#include "s21_string.h"

#include <stdio.h>
#include <stdlib.h>

int s21_strlen(const char *str) {
    int lenght = 0;
    while (str[lenght++] != '\0');
    return lenght;
}

int s21_strcmp(const char *str1, const char *str2) {
    int lenght = 0, res = 0;
    while (str1[lenght++] != '\0') {
        if (str1[lenght] != str2[lenght]) {
            res = 1;
            break;
        }
    }
    return res;
}

int s21_strcpy(char *str1, const char *str2) {
    int lenght = 0;
    while (str2[lenght] != '\0') {
        str1[lenght] = str2[lenght];
        lenght++;
    }
    str1[lenght] = '\0';
    return 0;
}

int s21_strcat(char *str1, const char *str2) {
    int lenght = 0, lenght2 = 0;
    while (str1[lenght] != '\0') {
        lenght++;
    }
    while (str2[lenght2] != '\0') {
        str1[lenght] = str2[lenght2];
        lenght++;
        lenght2++;
    }
    str1[lenght] = '\0';
    return 0;
}

int s21_strchr(const char *str, const char *symbol) {
    int length = 0, ret = 0;
    while (str[length] != '\0') {
        if (str[length] == *symbol) ret = 1;
        length++;
    }
    return ret;
}

int s21_strstr(const char *str1, const char *str2) {
    int lenght = 0, lenght2 = 0, ret = 0;
    while (str1[lenght] != '\0') {
        if (str2[lenght2] == '\0')
            break;
        else if (str1[lenght] == str2[lenght2]) {
            ret = lenght;
            lenght2++;
        } else {
            ret = 0;
            lenght2 = 0;
        }
        lenght++;
    }
    return ret;
}

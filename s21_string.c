#include <stdio.h>
#include <stdlib.h>
#include "s21_string.h"

size_t s21_strlen(const char *str)
{
	int lenght = 0;
	while (str[lenght++] != '\0');
	return lenght;
}

int s21_strcmp(const char *str1, const char *str2)
{
	int lenght = 0, res = 0;
	if (s21_strlen(str1) == s21_strlen(str2))
	{
		while (str1[lenght++] != '\0')
		{
			if (str1[lenght] != str2[lenght])
			{
				res = 1;
				break;
			}
		}
	}
	return res;
}

int s21_strcpy(char *str1, const char *str2)
{
	int lenght = 0;
	while (str2[lenght] != '\0')
	{
		str1[lenght] = str2[lenght];
		lenght++;
	}
	str1[lenght] = '\0';
	return 0;
}

//char *s21_strcat(char *str1, const char *str2)
int s21_strcat(char *str1, const char *str2)
{
	int lenght = 0, lenght2 = 0;
	while (str1[lenght] != '\0')
	{
		lenght++;
	}
	while (str2[lenght2] != '\0')
	{
		str1[lenght] = str2[lenght2];
		lenght++;
		lenght2++;
	}
        str1[lenght] = '\0';
	//return str1;
	return 0;
}

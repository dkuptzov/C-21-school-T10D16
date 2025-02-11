#include <stdio.h>
#include <stdlib.h>
#include "s21_string.h"
#ifdef STRLEN
	#define DO_TEST() s21_strlen_test()
#endif
#ifdef STRCMP
	#define DO_TEST() s21_strcmp_test()
#endif
#ifdef STRCPY
	#define DO_TEST() s21_strcpy_test()
#endif
#ifdef STRCAT
	#define DO_TEST() s21_strcat_test()
#endif

int s21_strlen_test();
int s21_strcmp_test();
int s21_strcpy_test();
int s21_strcat_test();
void result_strlen(int res);
void result_str(int res);

int main()
{
	DO_TEST();
	return 0;
}

int s21_strlen_test()
{
	int res = 0;
	char *test1 = "thmndsergdjiorgr", *test2 = "", *test3 = "6";
	printf("%s\n", test1);
	printf("%s\n", test1);
	res = s21_strlen(test1);
	result_strlen(res);
        printf("%s\n", test2);
        printf("%s\n", test2);
        res = s21_strlen(test2);
        result_strlen(res);
        printf("%s\n", test3);
        printf("%s\n", test3);
        res = s21_strlen(test3);
        result_strlen(res);
	return res;
}

int s21_strcmp_test()
{
	int res = 0;
	char *test1_1 = "123", *test1_2 = "123", *test2_1 = "test", *test2_2 = "tets", *test3_1 = "abc", *test3_2 = " abc";
        printf("%s\n", test1_1);
        printf("%s\n", test1_2);
	res = s21_strcmp(test1_1, test1_2);
	result_str(res);
        printf("%s\n", test2_1);
        printf("%s\n", test2_2);
        res = s21_strcmp(test2_1, test2_2);
        result_str(res);
        printf("%s\n", test3_1);
        printf("%s\n", test3_2);
        res = s21_strcmp(test3_1, test3_2);
        result_str(res);
	return res;
}

int s21_strcpy_test()
{
	int res = 0;
	char *test1 = "stroka1", *test2 = "stroka2", *test3 = "stroka3";
	char test1_res[10], test2_res[10], test3_res[10];
	printf("%s\n", test1);
	res = s21_strcpy(test1_res, test1);
	printf("%s\n", test1_res);
	result_str(res);
        printf("%s\n", test2);
        res = s21_strcpy(test2_res, test2);
        printf("%s\n", test2_res);
        result_str(res);
        printf("%s\n", test3);
        res = s21_strcpy(test3_res, test3);
        printf("%s\n", test3_res);
        result_str(res);
	return 0;
}

int s21_strcat_test() 
{
	int res = 0;
	char *test1 = "a", *test2 = "b", *test3 = "c";
	char test1add[10] = "aa", test2add[10] = "bb", test3add[10] = "cc";
	printf("%s %s\n", test1, test1add);
	res = s21_strcat(test1add, test1);
	printf("%s %s\n", test1, test1add);
        result_str(res);
        printf("%s %s\n", test2, test2add);
        res = s21_strcat(test2add, test2);
        printf("%s %s\n", test2, test2add);
        result_str(res);
        printf("%s %s\n", test3, test3add);
        res = s21_strcat(test3add, test3);
        printf("%s %s\n", test3, test3add);
	result_str(res);
	return 0;
}


void result_strlen (int res)
{
        if (res >= 1)
        {
                printf("SUCCESS\n");
        }
        else
        {
                printf("FAIL\n");
        }
}

void result_str(int res)
{
        if (res == 0)
        {
                printf("SUCCESS\n");
        }
        else
        {
                printf("FAIL\n");
        }
}

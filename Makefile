CC = gcc
CFLAGS = -Wall -Werror -Wextra -std=c11
LIBS = s21_string_test.c s21_string.c
OBJECTS = $(LIBS:.c=.o)
QUEST1 = ../build/Quest_1
QUEST2 = ../build/Quest_2
QUEST3 = ../build/Quest_3
QUEST4 = ../build/Quest_4
QUEST5 = ../build/Quest_5
QUEST6 = ../build/Quest_6
SRCS = s21_string.c
OBJECTS = $(SRCS:.c=.o)
TEST = s21_string_test.c
TEST_OBJ = $(TEST:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

strlen_tests: s21_string_test.c s21_string.c
	$(CC) $(CFLAGS) -DSTRLEN $^ -o $(QUEST1)

strcmp_tests: s21_string_test.c s21_string.c
	$(CC) $(CFLAGS) -DSTRCMP $^ -o $(QUEST2)

strcpy_tests: s21_string_test.c s21_string.c
	$(CC) $(CFLAGS) -DSTRCPY $^ -o $(QUEST3)

strcat_tests: s21_string_test.c s21_string.c
	$(CC) $(CFLAGS) -DSTRCAT $^ -o $(QUEST4)

strchr_tests: s21_string_test.c s21_string.c
	$(CC) $(CFLAGS) -DSTRCHR $^ -o $(QUEST5)

strstr_tests: s21_string_test.c s21_string.c
	$(CC) $(CFLAGS) -DSTRCHR $^ -o $(QUEST6)

.PHONY: clean

clean:
	rm -f $(QUEST1) $(QUEST2) $(QUEST3) $(QUEST4) $(QUEST5) $(QUEST6)

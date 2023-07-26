#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>



unsigned int check_delim(char c, const char *str);
char *_strtok(char *str, const char *delim);
char *get_input();
void handle_hashtag(char *input);
int search_path(char **cmd);
char *build_path(char *token, char *dir);
char *get_env(char *name);
int free_ptr(void **ptr);
int free_ptr(void **ptr);
int str_length(char *str);
char *str_duplicate(char *str);
int str_compare(char *str1, char *str2, int number);
char *str_concat(char *str1, char *str2);
void str_reverse(char *str);

#endif


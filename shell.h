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
typedef struct info_s {
   char *username;       
    char *current_dir;   
    int num_commands;
} info_t;

int is_command(info_t *shell_info, char *file_path);
char *duplicate_characters(char *path_str, int start_index, int stop_index);
char *find_command_path(info_t *shell_info, char *path_str, char *cmd);
int _strlen(char *str);
int _strcmp(char *str1, char *str2);
char *starts_with(const char *haystack, const char *needle);
char *_strcat(char *dest, char *src);
char *get_history_file(info_t *info);
int write_history(info_t *info);
int read_history(info_t *info);
int build_history_list(info_t *info, char *buf, int linecount);
int renumber_history(info_t *info);
int _printenv(void);

#endif


/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** The library main header.
*/

#ifndef _MY_H
#define _MY_H

typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;

void my_putnbr(int n);
void my_putchar(char c);
void my_swap(int *a, int *b);
void my_putstr(char const *str);
void my_sort_word_array(char **tab);
void my_str_swap(char **a, char **b);
void my_rev_list(linked_list_t **list);
void my_show_word_array(char * const *tab);
void my_sort_int_array(int *array, int size);
void my_concat_list(linked_list_t **list, linked_list_t *to_add);
void my_apply_on_nodes(linked_list_t *list, void (*f)());
void my_delete_nodes(linked_list_t **list, void const *criteria, int (*cmp)());
void my_advanced_sort_word_array(char **array, int (*cmp)(char const *, char const *));
void my_apply_on_matching_nodes(linked_list_t *list, void (*f)(), void const *query, int (*cmp)());

int my_ispos(int n);
int my_isneg(int n);
int my_isnum(char c);
int my_isalpha(char c);
int my_isupper(char c);
int my_islower(char c);
int my_isprime(int n);
int my_isalphanum(char c);
int my_isprintable(char c);
int my_find_prime_sup(int n);
int my_getnbr(char const *str);
int my_strlen(char const *str);
int my_compute_square_root(int n);
int my_str_isnum(char const *str);
int my_compute_factorial_it(int n);
int my_compute_factorial_rec(int n);
int my_str_isupper(char const *str);
int my_str_islower(char const *str);
int my_str_isalpha(char const *str);
int my_count_words(char const *str);
int my_compute_power_it(int n, int p);
int my_compute_power_rec(int n, int p);
int my_str_isalphanum(char const *str);
int my_str_isprintable(char const *str);
int my_list_size(linked_list_t const *list);
int my_strcmp(char const *s1, char const *s2);
int my_array_strlen(char * const *str, int size);
int my_strncmp(char const *s1, char const *s2, int n);

char my_tolower(char c);
char my_toupper(char c);

char *my_revstr(char *str);
char *my_str_toupper(char *str);
char *my_str_tolower(char *str);
char *my_strdup(char const *src);
char *my_str_capitalize(char *str);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
char *my_strstr(char *haystack, char const *needle);
char *my_strncat(char *dest, char const *src, int n);
char *my_strncpy(char *dest, char const *src, int n);

char **my_str_to_word_array(char const *str);

linked_list_t *my_params_to_list(int argc, char * const *argv);
linked_list_t *my_find_node(linked_list_t const *l, void const *c, int (*p)());

#endif

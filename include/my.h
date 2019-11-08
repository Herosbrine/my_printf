/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** my.h
*/

//  EVAL_EXPR.C
int eval_expr(char const *str);

//  CALCUL.C
char infin_basic_ope(char const *str, char *result, int i, int a);
char infin_ope(char const *str, char *result, int i, int a);

//  PARENTHESES.C
int manage_parentheses(char *str, char *stk, int i);

//  MANAGES_ERRORS.C
int manage_ope(char const *str, int i);
int manage_errors(char const *str);

// DO_OP.C
int do_op(char *nb1, char *nb2, char *signe);
int value_k(char *expr);
char *find_nb1(char * expr, int k);
char *find_nb2(char * expr, int k);
char *find_signe(char * expr, int k);

// INFIN_ADD.C
char *infin_add(char *nb1, char *nb2);

// OTHER FUNCTIONS
int my_strlen(char const *str);
int my_put_nbr(int nbr);
void my_putchar(char c);
int my_getnbr(char *str);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_put_nbr2(unsigned int nbr);

//octal
int my_put_octal(unsigned nbr);
int my_put_hexa(unsigned nbr);
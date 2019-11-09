/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** test_myprintf.c
*/

#include <criterion/criterion.h>
#include "../lib/my/my.h"
#include  <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stdout();
}

Test(my_printf, simple_string, .init = redirect_all_std)
{
    my_printf("hello %s", "world");
    cr_assert_stdout_eq_str("hello world");
}
Test(my_printf2, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}
Test(my_printf3, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %d", 14);
    cr_assert_stdout_eq_str("hello world 14");
}
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
Test(my_printf4, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %c", "14");
    cr_assert_stdout_eq_str("hello world 14");
}
Test(my_printf5, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %u", 14);
    cr_assert_stdout_eq_str("hello world 14");
}
Test(my_printf6, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %i", 14);
    cr_assert_stdout_eq_str("hello world 14");
}
Test(my_printf7, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %o", 14);
    cr_assert_stdout_eq_str("hello world 16");
}
Test(my_printf8, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %x", 14);
    cr_assert_stdout_eq_str("hello world E");
}
Test(my_printf9, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %%");
    cr_assert_stdout_eq_str("hello world %%");
}
Test(my_printf10, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %5d", 14);
    cr_assert_stdout_eq_str("hello world      14");
}
Test(my_printf11, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %    d", 14);
    cr_assert_stdout_eq_str("hello world     14");
}
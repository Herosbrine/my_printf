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
    my_printf("hello %% gregoire");
    cr_assert_stdout_eq_str("hello % gregoire");
}
Test(my_printf1, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}
Test(my_printf2, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %d et %X et %s et %c et %u et %o et %i", 14, 14, "14", "g", 4000000000, 14, 14);
    cr_assert_stdout_eq_str("hello world 14 et E et 14 et g et 4000000000 et 16 et 14");
}
Test(my_printf3, simple_string, .init = redirect_all_std)
{
    my_printf("hello world % d et % X et % s et % c et % u et % o et % i", 14, 14, "14", "g", 4000000000, 14, 14);
    cr_assert_stdout_eq_str("hello world  14 et  E et  14 et  g et  4000000000 et  16 et  14");
}
Test(my_printf4, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %2d et %2X et %2s et %2c et %2u et %2o et %2i", 14, 14, "14", "g", 4000000000, 14, 14);
    cr_assert_stdout_eq_str("hello world   14 et   E et   14 et  g et   4000000000 et   16 et   14");
}
Test(my_printf5, simple_string, .init = redirect_all_std)
{
    my_printf("hello world %   d et %   X et %    s et %    c et %   u et %    o et %   i", 14, 14, "14", "g", 4000000000, 14, 14);
    cr_assert_stdout_eq_str("hello world  14 et  E et  14 et  g et  4000000000 et  16 et  14");
}
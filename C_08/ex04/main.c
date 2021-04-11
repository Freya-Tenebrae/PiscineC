#include "ft_stock_str.h"
#include "ft_show_tab.c"
#include "ft_strs_to_tab.c"

int main()
{
    char *str[3] = {"Ceci est un test", "qui va demontrer",  "l'efficacite de la fonction"};
    struct s_stock_str *st;

    st = ft_strs_to_tab(3, str);
    ft_show_tab(st);
    return (0);
}

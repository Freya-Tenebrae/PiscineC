#include "ft_sort_int_tab.c"
#include <unistd.h>


int main()
{
    int n;
    int t[7];
    int i;

    n = 7;
    t[0] = 5;
    t[1] = 4;
    t[2] = 7;
    t[3] = 1;
    t[4] = 3;
    t[5] = 2;
    t[6] = 6;
    i = 0;

    ft_sort_int_tab(t, n);

    while (i < 7)
    {
        if (t[i] == i + 1)
            write(1, "1", 1);
        i++;
    }
}
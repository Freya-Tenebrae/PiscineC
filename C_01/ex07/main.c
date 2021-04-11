#include "ft_rev_int_tab.c"
#include <unistd.h>


int main()
{
    int n;
    int t[7];
    int i;

    n = 7;
    t[0] = 1;
    t[1] = 2;
    t[2] = 3;
    t[3] = 4;
    t[4] = 5;
    t[5] = 6;
    t[6] = 7;
    i = 0;

    ft_rev_int_tab(t, n);

    while (i < 7)
    {
        if (t[i] == 7 - i)
            write(1, "1", 1);
        i++;
    }
}
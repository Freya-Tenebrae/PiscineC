#include "ft_strlen.c"
#include <unistd.h>


int main()
{
    char* c;

    c = "je ne peut pas j'ai piscine";
    if (ft_strlen(c) == 27)
        write(1, "1", 1);
}

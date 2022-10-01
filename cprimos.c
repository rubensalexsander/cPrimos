#include <stdio.h>

int is_primo(const int x);
void find_primos(int first_num, int last_num);

void main()
{   
    int first, last;

    first = 0;
    last = 20;

    find_primos(first, last);
}

int is_primo(const int x)
{   
    register int c;

    for (c=2; c<x; c++)
    {
	    if ((x % c) == 0) return 0;
    }
    return 1;
}

void find_primos(int first_num, int last_num)
{
    int x;
    for (x=first_num; x <= last_num; x++) if (is_primo(x)) printf("%d\n", x);
    printf("\n-> %d primos were found.", x);
}

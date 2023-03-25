#include <stdio.h>

int _isupper(int c);

int main(void)
{
    char c = 'A';
    int result;

    result = _isupper(c);
    printf("Is '%c' uppercase? %d\n", c, result);

    c = 'a';
    result = _isupper(c);
    printf("Is '%c' uppercase? %d\n", c, result);

    return 0;
}

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

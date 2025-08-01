#include <stdio.h>

int sum_even_position(char *str)
{
    int i = 0;
    int sum = 0;
    while (str[i])
    {
        if (i % 2 == 0)
            sum += str[i] - '0';
        i++;
    }
    return (sum);
}
int main()
{
    printf("%d\n", sum_even_position("12345"));
}
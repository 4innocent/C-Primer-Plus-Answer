#include <stdio.h>

int main()
{
    const int TRANSTER = 7;
    int days;

    do
    {
        scanf("%d", &days);
        printf("%d周, %d天", days / 7, days % 7);
    } while (days > 0);

    return 0;
}
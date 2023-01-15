#include <stdio.h>

typedef struct {
    char* mounth;
    char* mounthAbb;
    int days;
    int mounthNum;
} Mounth;

int main() {
    Mounth mounths[12] = {
        {
            "January",
            "Jan.",
            31,
            1,
        },
        {
            "February",
            "Feb.",
            27,
            2
        },
        {
            "March",
            "Mar.",
            31,
            3
        },
        {
            "April",
            "Apr.",
            30,
            4
        },
        {
            "May",
            "May.",
            31,
            5
        },
        {
            "June",
            "Jun.",
            30,
            6
        },
        {
            "July",
            "Jul.",
            31,
            7
        },
        {
            "August",
            "Aug.",
            30,
            8
        },
        {
            "September",
            "Sep.",
            30,
            9
        },
        {
            "October",
            "Oct.",
            31,
            10
        },
        {
            "November",
            "Nov.",
            30,
            11
        },
        {
            "December",
            "Dec.",
            31,
            12
        }
    };
    Mounth* mon;
    printf("input the month name:\n");
    char monthName[12];
    fgets(monthName, 11, stdin);
    puts(monthName);
    return 0;
}

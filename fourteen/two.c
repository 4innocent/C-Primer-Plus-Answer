#include <stdio.h>
#include <string.h>

#define SIZE 12
typedef struct {
    char* mounth;
    char* mounthAbb;
    int days;
    int mounthNum;
} Mounth;

int main() {
    Mounth mounths[SIZE] = {
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
    printf("input day:");
    int day;
    char mounth[12];
    char year[5];

    scanf("%d", &day);
    fflush(stdin);
    printf("input mounth:");
    fgets(mounth, 12, stdin);
    if (mounth[strlen(mounth) - 1] == '\n') {
        mounth[strlen(mounth) - 1] = '\0';
    }
    fflush(stdin);
    printf("input year:");
    fgets(year, 5, stdin);
    if (mounth[strlen(year) - 1] == '\n') {
        mounth[strlen(year) - 1] = '\0';
    }
    fflush(stdin);

    int days = 0;
    for (int i = 0; i < SIZE; i++) {
        if (strcmp(mounths[i].mounth, mounth) == 0) {
            days += day;
            printf("%d", days);
            return 0;
        }
        days += mounths[i].days;
    }


}
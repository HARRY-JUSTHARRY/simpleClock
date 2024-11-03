#include <stdio.h>
#include "unistd.h" // for sleep() function
#include <stdlib.h>

int main()
{
    int hour = 0, minute = 0, second = 0;

    while (1)
    {
        // clear output screen

#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif

        // print time in HH:MM:SS format
        printf("%02d : %02d : %02d\n", hour, minute, second);
        fflush(stdout); // flush output buffer

        // increase second
        second++;

        // update hour, minute, and second
        if (second == 60)
        {
            minute++;
            second = 0;
        }
        if (minute == 60)
        {
            hour++;
            minute = 0;
        }
        if (hour == 24)
        {
            hour = 0;
        }

        sleep(1); // wait for 1 second
    }

    return 0;
}

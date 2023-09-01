#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    int alarm_hour, alarm_minute, current_hour, current_minute;
    time_t now;
    struct tm *time_now;

    printf("Enter the alarm time (hh:mm): ");
    scanf("%d:%d", &alarm_hour, &alarm_minute);

    while (1) {
        time(&now);
        time_now = localtime(&now);
        current_hour = time_now->tm_hour;
        current_minute = time_now->tm_min;

        if (current_hour == alarm_hour && current_minute == alarm_minute) {
            printf("Wake up!\n");
            break;
        }

        sleep(60);
    }

    return 0 ;
}


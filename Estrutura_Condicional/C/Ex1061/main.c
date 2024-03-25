#include <stdio.h>

struct Time {
    int day;
    int hour;
    int minute;
    int second;
};

int main() {
    struct Time start, end;
    char day_start[10], day_end[10];

    scanf("%s %d", day_start, &start.day);
    scanf("%d : %d : %d", &start.hour, &start.minute, &start.second);
    scanf("%s %d", day_end, &end.day);
    scanf("%d : %d : %d", &end.hour, &end.minute, &end.second);

    long long start_seconds = start.day * 24LL * 3600LL + start.hour * 3600LL + start.minute * 60LL + start.second;
    long long end_seconds = end.day * 24LL * 3600LL + end.hour * 3600LL + end.minute * 60LL + end.second;
    long long duration_seconds = end_seconds - start_seconds;

    int days = duration_seconds / (24 * 3600);
    int hours = (duration_seconds % (24 * 3600)) / 3600;
    int minutes = (duration_seconds % 3600) / 60;
    int seconds = duration_seconds % 60;

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}
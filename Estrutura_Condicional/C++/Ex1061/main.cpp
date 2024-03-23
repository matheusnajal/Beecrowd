#include <iostream>
#include <iomanip>
#include <string>

struct Time {
    int day;
    int hour;
    int minute;
    int second;
};

int main() {
    std::string day_start, day_end;
    Time start, end;

    std::cin >> day_start >> start.day;
    std::cin.ignore(); // ignore space
    std::scanf("%d : %d : %d", &start.hour, &start.minute, &start.second);
    std::cin >> day_end >> end.day;
    std::cin.ignore(); // ignore space
    std::scanf("%d : %d : %d", &end.hour, &end.minute, &end.second);

    long long start_seconds = start.day * 24 * 3600 + start.hour * 3600 + start.minute * 60 + start.second;
    long long end_seconds = end.day * 24 * 3600 + end.hour * 3600 + end.minute * 60 + end.second;
    long long duration_seconds = end_seconds - start_seconds;

    int days = duration_seconds / (24 * 3600);
    int hours = (duration_seconds % (24 * 3600)) / 3600;
    int minutes = (duration_seconds % 3600) / 60;
    int seconds = duration_seconds % 60;

    std::cout << days << " dia(s)" << std::endl;
    std::cout << hours << " hora(s)" << std::endl;
    std::cout << minutes << " minuto(s)" << std::endl;
    std::cout << seconds << " segundo(s)" << std::endl;

    return 0;
}
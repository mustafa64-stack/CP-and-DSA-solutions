#include <stdio.h>

int main() {
    long long total;
    scanf("%lld", &total);

    long long hours = total / 3600;
    total %= 3600;

    long long minutes = total / 60;
    long long seconds = total % 60;

    printf("%lld:%lld:%lld", hours, minutes, seconds);

    return 0;
}

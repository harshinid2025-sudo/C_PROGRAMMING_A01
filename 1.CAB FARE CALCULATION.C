#include <stdio.h>
int main() {
    int distance, member;
    float fare;

    scanf("%d %d", &distance, &member);

    fare = 100;

    if (distance > 10) {
        fare = fare + (distance - 10) * 20;
    }

    if (member == 1) {
        fare = fare * 0.9;
    }

    printf("Final Fare: %.0f", fare);

    return 0;
}

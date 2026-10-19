#include <stdio.h>
int main() {
    int gold, x, y;
    int ben, blackbeard, remaining, pirate;

    scanf("%d %d %d", &gold, &x, &y);

    ben = gold * x / 100;
    remaining = gold - ben;

    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;

    pirate = remaining / 3;

    printf("%d\n", ben);
    printf("%d\n", blackbeard);
    printf("%d", pirate);

    return 0;
}

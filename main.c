#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

int main() {
    // DIGITAL CLOCK //

    time_t rawtime = 0;
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while (isRunning) {

        time (&rawtime);
        pTime = localtime(&rawtime);
        printf("%d:%d:%d\n", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

        Sleep(1);

    }
    return 0;



}

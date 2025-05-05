#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void clear_screen();

void start_stopwatch()
{
    int hours = 0, minute = 0, seconds = 0;
    char command2 = ' ';

    while (1)
    {
        clear_screen();
        printf("Stopwatch: %02d:%02d:%02d\n", hours, minute, seconds);
        printf("Enter 'p' to pause, 'r' to reset, 'q' to quit, or press Enter to continue: ");

        sleep(1); // Wait 1 second
        seconds++;

        if (seconds == 60)
        {
            seconds = 0;
            minute++;
            if (minute == 60)
            {
                minute = 0;
                hours++;
            }
        }

        // Non-blocking simulation with getchar() instead of scanf
        if (kbhit()) // kbhit is a non-standard function; you may need to implement it
        {
            command2 = getchar();
            if (command2 == 'p')
            {
                printf("Stopwatch paused. Press 's' to resume.\n");
                while (getchar() != 's')
                    ; // wait for 's' to resume
            }
            else if (command2 == 'r')
            {
                hours = minute = seconds = 0;
            }
            else if (command2 == 'q')
            {
                printf("Stopwatch stopped.\n");
                break;
            }
        }
        { // kbhit is non-standard; works in Windows or with extra code in Unix
            command2 = getchar();
            if (command2 == 'p')
            {
                printf("Stopwatch paused. Press 's' to resume.\n");
                while (getchar() != 's')
                    ; // wait for 's' to resume
            }
            else if (command2 == 'r')
            {
                hours = minute = seconds = 0;
            }
            else if (command2 == 'q')
            {
                printf("Stopwatch stopped.\n");
                break;
            }
        }
    }
}

void clear_screen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    char command = ' ';
    while (1)
    {
        printf("Enter 's' to start the stopwatch\n");
        printf("Enter 'q' to quit the program\n");
        printf("Enter a command: ");
        scanf(" %c", &command);

        if (command == 's')
        {
            start_stopwatch();
        }
        else if (command == 'q')
        {
            printf("Quitting program.\n");
            break;
        }
        else
        {
            printf("Invalid command. Try again.\n");
        }
    }
    return 0;
}

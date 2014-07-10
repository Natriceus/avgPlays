#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv){

    double argument, days;
    time_t current_time;
    time(&current_time);
    struct tm then = *localtime(&current_time);
    then.tm_year = 113;
    then.tm_mon = 9;
    then.tm_mday = 16;

    days = (difftime(current_time, mktime(&then)))/86400;
    printf("%.f days have passed.\n", days);

    if(argv[1] != NULL){
        argument = atof(argv[1]);
        printf("%.3f plays per average day.\n", argument/days);
    }

    return 0;

}

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <sys/time.h>
#include <stdbool.h>


typedef struct s_people
{
    char            *name;
    bool            eat;
    pthread_t       id;
}t_people;

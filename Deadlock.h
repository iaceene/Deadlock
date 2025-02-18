#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct s_people
{
    char            *name;
    pthread_t       id;
}t_people;

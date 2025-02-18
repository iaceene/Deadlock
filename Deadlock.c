#include "Deadlock.h"

pthread_mutex_t food;

void *routine(void *arg)
{
    t_people *data = (t_people *)arg;

    printf("%s will eat\n", data->name);
    pthread_mutex_lock(&food);
    printf("%s is eating....\n", data->name);
}

int main()
{
    t_people moad;
    t_people omar;
    t_people khadija;
    t_people mohamed;

    moad.name = "moad";
    omar.name = "omar";
    khadija.name = "khadija";
    mohamed.name = "mohamed";
    pthread_mutex_init(&food, NULL);
    pthread_create(&moad.id, NULL, routine, (void *)&moad);
    pthread_create(&omar.id, NULL, routine, (void *)&omar);
    pthread_create(&khadija.id, NULL, routine, (void *)&khadija);
    pthread_create(&mohamed.id, NULL, routine, (void *)&mohamed);
    pthread_join(moad.id, NULL);
    pthread_join(omar.id, NULL);
    pthread_join(khadija.id, NULL);
    pthread_join(mohamed.id, NULL);
    pthread_mutex_destroy(&food);
    return (0);
}
#include <stdio.h>
#include <pthread.h>

void *sayHello()
{
    printf("saying ,,, Hello, Threre ...\n");
    return NULL;
}
int main(void)
{
    /***
    pthread_create();
    pthread_join();
    pthread_exit();
    ***/

    pthread_t thread_1 = 0;
    pthread_create(&thread_1, NULL, sayHello, NULL);
    pthread_join(thread_1, NULL);
    pthread_exit(&thread_1);

    return 0;
}

#include "isshe_common.h"
#include "isshe_error.h"
#include "isshe_ipc.h"
#include "isshe_unistd.h"

int main(int argc, char *argv[])
{
    sem_t *sem;

    if (argc != 2) {
        isshe_error_exit("Usage: sempost <name>");
    }

    sem = isshe_sem_open(argv[1], 0);
    isshe_sem_post(sem);
#ifdef __linux__
    int val;
    isshe_sem_getvalue(sem, &val);
    printf("sem value = %d\n", val);
#endif

    exit(0);
}
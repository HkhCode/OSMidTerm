#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#include "syscall.h"

int main(int argc, char const *argv[])
{
    int m = atoi(argv[1]);
    cps(m);
    exit();
}

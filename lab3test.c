#include "types.h"
#include "user.h"


void test1 (int arg1, int arg2) {

}

int
main(int argc, char **argv) {
    int v = argc;
    printf(1, "%p\n", &v);
    exit();
}

#include "syscall.h"

main() {
    int i;
    for(i = 0; i<5; i++){
       Sleep(1000000);
       PrintInt(1);
    }
    return 0;
}

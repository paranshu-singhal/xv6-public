#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){

    int x = atoi(argv[1]);
    if (info(x) < 0){
        printf(1, "An error occured\n");
    }
    exit();
}
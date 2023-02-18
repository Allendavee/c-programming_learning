#include <stdio.h>
#include <string.h>
#include <errno.h>

extern int errno;

int main(){
    FILE *p;
    int errnum;
    p = fopen("wnexisting.txt", "rb");

    if (p == NULL){

        errnum = errno;
        fprintf(stderr, "The value of error is: %d\n", errno);
        perror("This value is printed with Perror");
        fprintf(stderr, "This is was opened Sterror %s\n", strerror(errnum));
    } else {
        fclose(p);
    }

}
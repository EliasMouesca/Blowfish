#include "blowfish.h"
#include <iostream>
#include <cstring>
#include <stdarg.h>

void die(const char* fmt, ...);

int main(int argc, char** argv)
{
    if (argc != 4) die("Usage: %s {e | d} {key} {file}", argv[0]);

    Blowfish cipher;

    cipher.set_key(argv[2]);
    cipher.generate_subkeys();
    char outputFile[100];           // Possible buffer overflow
    strcpy(outputFile, argv[3]);

    if (strcmp(argv[1], "e") == 0) {
        strcat(outputFile, ".enc");
        cipher.encrypt_file(argv[3], outputFile);
    }
    else if (strcmp(argv[1], "d") == 0) {
        strcat(outputFile, ".dec");
        cipher.decrypt_file(argv[3], outputFile);
    }
    else die("Usage: %s {e | d} {key} {file}", argv[0]);

    return 0;

}

void die(const char *fmt, ...){
    va_list ap;

    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);

    if (fmt[0] && fmt[strlen(fmt)-1] == ':') {
        fputc(' ', stderr);
        perror(NULL);
    } else {
        fputc('\n', stderr);
    }

    exit(1);
}
  

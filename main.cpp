#include "blowfish.h"

int main()
{
    Blowfish cipher;

    cipher.set_key("");
    cipher.generate_subkeys();
    cipher.encrypt_file("file.txt", "file.enc");
    cipher.decrypt_file("file.enc", "file.dec");

    return 0;

}

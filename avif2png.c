/*
sudo apt-get install libavif-dev
sudo apt-get install imagemagick
sudo apt install pkgconf     # version 1.8.0-1
*/

/*
running by the following command:
gcc -o avif2png avif2png.c `pkg-config --cflags --libs MagickWand`
./avif2png input.avif output.png
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s input.avif output.png\n", argv[0]);
        return 1;
    }
    char command[1000];
    sprintf(command, "convert %s %s", argv[1], argv[2]);
    system(command);
    return 0;
}

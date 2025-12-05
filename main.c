#include "so_long.h"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (write(1, "Error\nYou need one arg\n", 23));
    map(argv[1]);
}
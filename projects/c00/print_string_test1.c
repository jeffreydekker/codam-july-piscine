#include <unistd.h>

int main()
{
    char e[] = "abcd";
    write(1, &e, 4);
}

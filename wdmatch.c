#include <unistd.h>

void    wdmatch(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while (s1[i])
    {
        while (s2[j] && s2[j] != s1[i])
            j++;
        if (!s2[j])
            return;
        i++;
    }
    write(1, s1, i);
}

int main(int argc, char **argv)
{
    if (argc == 3)
        wdmatch(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
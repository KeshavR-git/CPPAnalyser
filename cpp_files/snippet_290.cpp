void Capitalise(char *c)
{
    int i = 1;

    if ((c[0] >= 'a') && (c[0] <= 'z')) {
        c[0] -= 'a'-'A';
    }

    while (c[i] != '\0') {
        if ((c[i-1] == ' ') && (c[i] >= 'a') && (c[i] <= 'z')) {
                c[i] -= 'a'-'A';
        }
        i++;
    }
}
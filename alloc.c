#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char *alloc(int n);
void afree(char *p);

int main(int argc, char const *argv[]) {

    char *p;

    p = alloc(10);

    p = "Helloworld";

    return 0;
}

char *alloc(int n)
{
    if (allocbuf + ALLOCSIZE - allocp >= n)
    {
        allocp += n;
        return allocp - n;
    }else
        return 0;
}

//This is for testing dev branch

void afree(char *p)
{
    if (p >= allocbuf && p <= allocbuf + ALLOCSIZE)
        allocp = p;
}

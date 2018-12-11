#include <stdio.h>

int main(int argc, char const *argv[]) {
    FILE *fp;
    char line[10000];
    fp = fopen("text1.txt", "r");
    while (fgets(line, 10000, fp))
        printf("%s\n", line);
    return 0;
}

#include "hash.h"

int main(void) {

    struct nlist *temp;
    int index;

    install("Tianyi", "Sky");
    install("Yufeng", "Steven");
    install("Ruihan", "Multy");
    install("Kangying", "Connie");

    temp = lookup("Tianyi");
    printf("%s\n", temp->defn);

    temp = lookup("Ruihan");
    printf("%s\n", temp->defn);

    undef("Ruihan");
    temp = lookup("Ruihan");
    printf("%s\n", temp == NULL ? "succeeded" : "fail");

    return 0;
}

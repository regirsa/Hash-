#include <stdio.h>
#include <stdlib.h>

int main() {
    int ret;

    printf("Verificando integridade...\n");

    ret = system("sha256sum -c hashes.sha256");

    if (ret == 0) {
        printf("Integridade OK\n");
    } else {
        printf("Arquivo alterado!\n");
    }

    return 0;
}

#include <cstdio>
#include <cstdlib>

int main() {
    fprintf(stderr, "%s\n", getenv("PWD"));
    return 0;
}

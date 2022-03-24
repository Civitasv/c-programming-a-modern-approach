#include "stdbool.h"

bool has_zero(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == 0)
            return true;
    }
    return false;
}
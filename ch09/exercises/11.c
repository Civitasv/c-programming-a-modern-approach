#include "ctype.h"

float compute_GPA(char [], int);

float compute_GPA(char grades[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        switch (toupper(grades[i])) {
            case 'A':
                sum += 4;
                break;
            case 'B':
                sum += 3;
                break;
            case 'C':
                sum += 2;
                break;
            case 'D':
                sum += 1;
                break;
            case 'F':
                sum += 0;
                break;
        }
    }
    return sum * 1.0f / n;
}

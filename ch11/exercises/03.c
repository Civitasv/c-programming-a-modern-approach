void avg_sum(double a[], int n, double *avg, double *sum) {
    int i;

    *sum = 0.0; // wrong 1
    for (i = 0; i < n; i++) {
        *sum += a[i]; // wrong 2
    }
    *avg = *sum / n; // wrong 3
}
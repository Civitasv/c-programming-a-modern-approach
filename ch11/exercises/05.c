void split_time(long total_sec, int *hr, int *min, int *sec) {
    *hr = total_sec / 60 / 60;
    *min = total_sec / 60 - *hr * 60;
    *sec = total_sec - *hr * 60 * 60 - *min * 60;
}
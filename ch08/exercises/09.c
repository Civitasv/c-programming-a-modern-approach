#define DAYS 30
#define HOURS 24

int main() {
    double average = 0.0;

    double temperature_readings[DAYS][HOURS] = {0};

    for (int i = 0; i < DAYS; i++) {
        for (int j = 0; j < HOURS; j++)
            average += temperature_readings[i][j];
    }
    average /= DAYS * HOURS;
    return 0;
}

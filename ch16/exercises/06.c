struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct time split_time(long total_seconds)
{
    int hours = total_seconds / 60 / 60;
    int minutes = total_seconds / 60 - hours * 60;
    int seconds = total_seconds - hours * 60 * 60 - minutes * 60;
    return (struct time){hours, minutes, seconds};
}
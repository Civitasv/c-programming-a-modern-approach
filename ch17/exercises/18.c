#define NAME_LEN 20

struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
};

int compare_parts(const void *p, const void *q)
{
    const struct part *p1 = p;
    const struct part *p2 = q;
    return p2->number - p1->number;
}
// a.
char *(*p)(char *);

void (*f(struct t *p, long int n))(void);

// c.
void insert();
void search();
void update();
void print();
void (*a[4])(void) = {insert, search, update, print};

// d.
struct t (*b[10])(int, int);
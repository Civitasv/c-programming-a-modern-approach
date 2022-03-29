#include <string.h>
#include <stdio.h>

void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

int main()
{
    char index_url[100];

    build_index_url("knking.com", index_url);

    printf(index_url);

    return 0;
}
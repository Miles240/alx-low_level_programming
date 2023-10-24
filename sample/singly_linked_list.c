#include "lib.h"

struct node
{
    int data;
    struct node *link;
};

int main()
{

    struct node *head = NULL;
    head = malloc(sizeof(struct node));

    head->data = 45;
    printf("%d\n", head->data);
}
 o.,  
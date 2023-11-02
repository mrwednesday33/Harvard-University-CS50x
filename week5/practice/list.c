#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(int argc, char *argv[1])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        // For each command-line argument
        int number = atoi(argv[i]);

        // Allocate node for number
        node *n = malloc(sizeof(node));
        if ( n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = NULL;

        // Prepend node to list
        n->next = list;
        list = n;
    }

    // Print number
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

    // Free memmory
    ptr = list;
    while (ptr != NULL)
    {
        node *next = ptr ->next;
        free(ptr);
        ptr = next;
    }
}
/**
 * queue.c by Jelle van Assema
 *
 * 6-10-2014
 * 
 * Program that lets the user store integer numbers in a queue
 * and the user can then pop and print those numbers.
 */
 
#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct int_node
{
    struct int_node* next;
    int value;
} int_node;

typedef struct
{
    int_node* start;
    int_node* end;
    int length;
} int_queue;

int_queue* init_queue(void);
int pop(int_queue* queue);
void add(int_queue* queue, int val);

int main(int argc, char* argv[])
{
    // initialize queue
    int_queue* queue = init_queue();
    
    char user_input = ' ';
    
    // untill user decides to quit
    while (user_input != 'q')
    {
        // request input
        printf("Type i to insert an integer value, "
        "p to pop and print first value or q to quit.\n");
        user_input = GetChar();
        
        // handle user input
        switch (user_input)
        {
            // insert requested, add element to queue
            case 'i':
                add(queue, GetInt());
                break;
                
            // print requested, pop and print
            case 'p': 
                if (queue->length > 0)
                    printf("%d\n", pop(queue));
                else
                    printf("Queue is empty!\n");
                break;
            
            // quit requested, do nothing
            case 'q':
                break;
            
            // user entered illegal input
            default:
                printf("Illegal input\n");    
        }
    }
    
    // free remaining elements in queue
    for (int i = 0, l = queue->length; i < l; i++)
        pop(queue);
    free(queue);
    
    printf("Thanks for playing!\n");
    
    return 0;
}

// Initialize an int_queue.
int_queue* init_queue(void)
{
    int_queue* queue = malloc(sizeof(int_queue));
    queue->start = NULL;
    queue->end = NULL;
    queue->length = 0;
    return queue;
}

/**
 * Add value to queue.
 */
void add(int_queue* queue, int value)
{
    // TODO
}

/**
 * Pop first element from queue.
 */
int pop(int_queue* queue)
{
    // TODO
    return 0;
}

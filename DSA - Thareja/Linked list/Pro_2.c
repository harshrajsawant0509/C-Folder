// Write a program to create a circular linked list. Perform insertion and deletion at the beginning and end of the list.

#include <stdio.h>
#include <malloc.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *start =  NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *);

int main() {
    int option;
    do
    {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1: Create a list");
        printf("\n 2: Display the list");
        printf("\n 3: Add a node at the beginning");
        printf("\n 4: Add a node at the end");
        printf("\n 5: Delete a node from the beginning");
        printf("\n 6: Delete a node from the end");
        printf("\n 7: Delete a node after a given node");
        printf("\n 8: Delete the entire list");
        printf("\n 9: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            start = create_ll(start);
            printf("Circular Linked List is created");
            break;

        case 2:
            start = display(start);
            break;
        
        case 3:
            start = insert_beg(start);
            break;

        case 4:
            start = insert_end(start);
            break;
        
        case 5:
            start = delete_beg(start);
            break;

        case 6:
            start = delete_end(start);
            break;
        
        case 7:
            start = delete_after(start);
            break;
        
        case 8:
            start = delete_list(start);
            break;
        }    
    } while (option != 9);
    return 0;
}

struct node *create_ll(struct node *start)
{
    struct node *new_node,*ptr;
    int num;
    printf("Enter -1 to end the linked list.\n");
    printf("Enter the data : ");
    scanf("%d", &num);
    while (num != -1)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node -> data = num;
        if (start ==  NULL)
        {
            new_node -> next = new_node;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr -> next = start)
            {
                ptr = ptr -> next;
            }
            ptr -> next = new_node;
            new_node -> next = start;
        }
        printf("\n Enter the data : ");
        scanf("%d", &num);   
    }
    return start;   
}

struct node *display(struct node *start)
{
    struct node *ptr;
    printf("START -> ");
    while (ptr -> next != start)
    {
        printf("%d -> ", ptr -> data);
        ptr = ptr -> next;
    }
    printf("%d ", ptr -> data);
    return start;
}

struct node *insert_beg(struct node *start)
{
    struct node *ptr,*new_node;
    int num;
    printf("Enter the data : ");
    scanf("%d ", &num );
    ptr = start;
    while (ptr -> next != start)
    {
        ptr = ptr -> next;
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = start;
    ptr -> next = new_node;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start)
{
    struct node *ptr,*new_node;
    int num;
    printf("Enter the data : ");
    scanf("%d ", &num );
    ptr = start;
    while (ptr -> next != start)
    {
        ptr = ptr -> next;
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node -> data = num;
    new_node -> next = start;
    ptr -> next = new_node;
    return start;
}

struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr -> next != start )
    {
        ptr -> next = ptr;
    }
    ptr -> next = start -> next;
    free(start);
    start = ptr -> next;
    return start;
}

struct node *delete_end(struct node *start)
{
    struct node *preptr,*ptr;
    ptr = start;
    while (ptr -> next != start)
    {
        preptr = ptr;
        ptr -> next = ptr;
    }
    preptr -> next = ptr -> next;
    free(ptr);
    return start;
}

struct node *delete_after(struct node *start)
{
    int val;
    struct node *preptr , *ptr ;
    printf("Enter the value after which the element is delete : ");
    scanf("%d", &val);
    ptr = start;
    while (preptr -> data = val)
    {
        preptr = ptr;
        ptr -> next = ptr;
    }
    preptr -> next = ptr -> next;
    if (ptr == start)
    {
        start = preptr ->  next;
    }
    free(ptr);
    return start;
}

struct node *delete_list(struct node *start)
{
struct node *ptr;
ptr = start;
while(ptr -> next != start)
start = delete_end(start);
free(start);
return start;
}

  /*
Write a program to create a linked list and perform insertions and deletions of all cases. 
Write functions to sort and finally delete the entire list at once.
*/

#include <stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_after(struct node *);

int main()
{
    int option;
    do
    {
        printf("\n\n *****MAIN MENU *****");
        printf("\n 1:  Create a list");
        printf("\n 2:  Display the list");
        printf("\n 3:  Add a node at the beginning");
        printf("\n 4:  Add a node at the end");
        printf("\n 5:  Add a node before a given node");
        printf("\n 6:  Add a node after a given node");
        printf("\n 7:  Delete a node from the beginning");
        printf("\n 8:  Delete a node from the end");
        printf("\n 9: Delete a node after a given node");
        printf("\n 10: EXIT");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            start = create_ll(start);
            printf("Linked list is created!");
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
        start = insert_before(start);
        break;

        case 6: 
        start = insert_after(start);
        break;

        case 7: 
        start = delete_beg(start);
        break;

        case 8: 
        start = delete_end(start);
        break;

        case 9:
        start = delete_after(start);
        break;

        default:
            break;
        }
    } while (option != 11);
   return 0; 
}

struct node *create_ll(struct node * start)
{
    struct node *new_node, *ptr;
    int num;
    printf("Enter -1 to the end\n");
    printf("Enter the data : ");
    scanf("%d",&num);
    while (num != -1)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node ->data = num;

        if(start == NULL)
        {
            new_node -> next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while (ptr -> next != NULL)
            {
                ptr = ptr -> next;
            }
                ptr -> next = new_node;
                new_node -> next = NULL;
        }
        printf("Enter The Data : \n");
            scanf("%d", &num);
    }
    return start;
}

struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while (ptr != NULL)
    {
        printf("\t %d",ptr -> data);
        ptr = ptr -> next;
    }
    return start;
}

struct node *insert_beg(struct node * start)
{
    struct node *new_node;
    int num;
    printf("Enter The data : ");
    scanf("%d", &num);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node ->data = num;
    new_node ->next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start)
{
    struct node *new_node ,*ptr;
    int num;
    printf("Ente the data : ");
    scanf("%d",&num);
    new_node = (struct node*)malloc(sizeof(struct node));
    ptr = start;
    while(ptr->next != NULL)
    {
        ptr = ptr -> next;
    }
    new_node -> data = num;
    ptr -> next = new_node;
    new_node -> next = NULL;

    return start;
}

struct node *insert_before(struct node * start)
{
    struct node *ptr,*preptr,*new_node;
    int num,val;
    printf("Enter the data : ");
    scanf("%d", &num);
    printf("Enter the data value before which u have to insert the data : ");
    scanf("%d", &val);
    ptr = start;
    while (ptr -> data != val )
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node ->  data = num;
    preptr -> next = new_node;
    new_node -> next = ptr;
    return start;
}

struct node *insert_after(struct node *start)
{
    struct node *ptr,*preptr,*new_node;
    int num,val;
    printf("Enter the data : ");
    scanf("%d", &num);
    printf("Enter the data value after which u have to inser the data : ");
    scanf("%d", &val);
    ptr = start;
    while (preptr -> data != val )
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node ->  data = num;
    preptr -> next = new_node;
    new_node -> next = ptr;
    return start;
}

struct node *delete_beg(struct node *start)
{
    struct node *ptr;
    ptr = start;
    start = start -> next;
    free(ptr);
    return start;
}

struct node *delete_end(struct node *start)
{
    struct node *ptr,*preptr;
    ptr = start;
    while(ptr -> next = NULL)
    {
        preptr = ptr;
        ptr = ptr -> next ;
    }
    preptr -> next = NULL;
    free(ptr);
    return start;
}

struct node *delete_after(struct node *start)
{
    struct node *ptr , *preptr;
    int val;
    printf("Enter the data value after which u have to delete the node : ");
    scanf("%d",&val);
    ptr = start;
    while (preptr -> data != val)
    {
        preptr = ptr;
        ptr = ptr -> next;
    }
    preptr -> next = ptr -> next;
    free(ptr);
    return start;
}



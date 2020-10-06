#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 10
typedef struct list_node
{
    int item;
    struct list_node *next;
    struct list_node *prev;
}node;
node *head=NULL, *tail=NULL;
int size=0;
void insert_at_beginning(int value);    //code 0
void insert_at_end(int value);          //code 1
void delete_from_beginning();           //code 2
void delete_from_end();                 //code 3
void print_list();                      //code 4
int main()
{
    int n, val;
    while ( scanf("%d",&n) )
    {
        switch ( n )
        {
            case 0 :
                scanf("%d",&val);
                insert_at_beginning(val);
                break;
            case 1 :
                scanf("%d",&val);
                insert_at_end(val);
                break;
            case 2 :
                delete_from_beginning();
                break;
            case 3 :
                delete_from_end(); 
                break;
            case 4 :
                print_list();
                break;
            default : 
                printf("INVALID SEQUENCE OF COMMANDS");
                exit (0);
        }
    }
    return 0;
}
void insert_at_beginning(int value)
{
    if ( size>=MAX_SIZE-1 )
    {
        printf("List can not accommodate more than 10 elements");
        exit (0);
    }
    else 
    {
        node *new = (node *)malloc(sizeof(node));
        new->item = value;
        size++;
        new->next = NULL;
        if ( head==NULL )
        {
            head = new;
            new->prev = NULL;
            tail = new;
        }
        else
        {
            new->prev = NULL;
            new->next = head;
            head->prev = new;
            head = new;
        }
    }
}
void insert_at_end(int value)
{
    if ( size>=MAX_SIZE-1 )
    {
        printf("List can not accommodate more than MAXSIZE elements");
        exit (0);
    }
    else
    {
        node *new = (node *)malloc(sizeof(node));
        new->item = value;
        size++;
        new->next = NULL;
        if ( tail==NULL )
        {
            new->prev = NULL;
            head = new;
        }
        else
        {
            new->prev = tail;
            tail->next = new;
            tail = new;
        }
    }
}
void delete_from_beginning()
{
    if ( head==NULL || tail==NULL || tail==head )
    {
        printf("INVALID SEQUENCE OF COMMANDS");
        exit(0);
    }
    else
    {
        node *temp=head;
        head = temp->next;
        head->prev = NULL;
        temp->next = NULL;
        free(temp);
        size--;
    }
}
void delete_from_end()
{
    if ( tail==NULL || head==NULL )
    {
        printf("INVALID SEQUENCE OF COMMANDS");
        exit(0);
    }
    else
    {
        node *temp=tail;
        tail = temp->prev;
        tail->next = NULL;
        free(temp);
        size--;
    }
}
void print_list()
{
    node *temph = head;
    node *tempt = tail;
    if ( temph==NULL || tempt==NULL )
    {
        printf("List is Empty");
        exit(0);    
    }
    else
    {
        printf("Left -> Right :\n");
        while ( temph->next!=NULL )
        {
            printf("%d ",temph->item);
            temph = temph->next;
        }
        printf("%d ",tempt->item);
        printf("\nRight -> Left :\n");
        while ( tempt->prev!=NULL )
        {
            printf("%d ",tempt->item);
            tempt = tempt->prev;
        }
        printf("%d ",tempt->item);
    }
    exit (0);
}

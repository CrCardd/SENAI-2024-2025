#ifndef STACKMETHODS_H
#define STACKMETHODS_H


#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
    int idade;
    int nota;
}Person;

typedef struct Node Node;

typedef struct Node
{
    Person person;
    Node *next;
    Node *prev;
}Node;


Node* constructor_node(Person value)
{
    Node* new_ = (Node*) malloc(sizeof(Node));
    new_->next = NULL;
    new_->prev = NULL;
    new_->person = value;
    
    return new_;
}


typedef struct 
{
    Node *head;
    Node *tail;
    int size;
}LinkedList;


LinkedList constructor_list()
{
    LinkedList new_;
    new_.head = NULL;
    new_.tail = NULL;
    new_.size = 0;

    return new_;
}


void push(LinkedList *linkedList, Person person)
{
    Node *node = constructor_node(person);

    if(linkedList->head == NULL)
    {
        linkedList->head = node;    
        linkedList->tail = node; 
        linkedList->size++;
        return;
    }
    linkedList->tail->next = node;
    node->prev = linkedList->tail;
    linkedList->tail = node;
    linkedList->size++;
}


void pop(LinkedList *linkedList)
{
    if(linkedList->head == NULL)
        return;
    
    linkedList->size--;
    linkedList->tail = linkedList->tail->prev;
    linkedList->tail->next = NULL;
}


Person peek(LinkedList *LinkedList)
{
    if (LinkedList->size == 0)
        return;
    
    return LinkedList->tail->person;
}


void test(LinkedList *linkedList)
{
    Node *current;
    current = linkedList->head;
    for(int i = 0; i < linkedList->size; i++)
    {
        printf("%d\n",current->person.idade);
        current = current->next;
    }
}



#endif
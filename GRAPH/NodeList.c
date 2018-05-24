#include <stdlib.h>
#include <stdio.h>
#include "NodeList.h"


void AddNode(struct NodeList** list,int* edgevalue){


    if (!(*list)){
        AddFirstNode(&*list,edgevalue);
    }else{
        AddLastElement(*list,edgevalue);
    }
}

static void AddFirstNode(struct NodeList** list,int* edgevalue){

     *list = malloc(sizeof(struct NodeList));
    struct Node* tmp = malloc(sizeof(struct Node));

    tmp->node_value = *edgevalue;
    tmp->next = NULL;

    (*list)->head = tmp;
    (*list)->tail = tmp;
}

static void AddLastElement(struct NodeList* list,int* edgevalue){

    struct Node* tmp = malloc(sizeof(struct Node));

    tmp->node_value = *edgevalue;
    tmp->next = NULL;

    list->tail->next = tmp;
    list->tail = tmp;

}

void DeleteNodeList(struct NodeList* list){

    struct Node* current = list->head;
    struct Node* next;


    while(current){
            next = current->next;
            free(current);
            current = next;
    }

    free(list);
}

void PrintNodeList(struct NodeList* list){

    struct Node* tmp = list->head;

    while (tmp){
        printf("%d ",tmp->node_value);
        tmp = tmp->next;
    }
}

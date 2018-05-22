#ifndef NODELIST_H
#define NODELIST_H

struct Node{
    int node_value;
    struct Node* next;
};

struct NodeList{
    struct Node* head;
    struct Node* tail;
};


void AddNode(struct NodeList** list,int* edgevalue);
static void AddFirstNode(struct NodeList** list,int* edgevalue);
static void AddLastElement(struct NodeList* list,int* edgevalue);
void PrintNodeList(struct NodeList* list);
#endif // NODELIST_H

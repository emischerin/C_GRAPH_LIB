#ifndef GRAPH_H
#define GRAPH_H

#include "NodeList.h"


struct Graph{
    struct NodeList** node_list;
    int nodelist_size;
};


struct Graph* NewGraph(int length);
void AddEdge(struct Graph* g,int edgevalue,int list_index);
void PrintGraph(struct Graph* g);
void InitList(struct NodeList*arr,int arr_size);
void DeleteGraph(struct Graph* g);
#endif // GRAPH_H

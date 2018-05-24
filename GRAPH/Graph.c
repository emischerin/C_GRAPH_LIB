#include <stdlib.h>
#include <stdio.h>
#include "Graph.h"
#include "NodeList.h"
#include <strings.h>

struct Graph* NewGraph(int length){


    struct Graph* newgraph = malloc(sizeof(struct Graph));
    newgraph->node_list = calloc(length,sizeof(struct NodeList));

    newgraph->nodelist_size = length;


    return newgraph;
}

void AddEdge(struct Graph* g,int edgevalue,int list_index){


    AddNode(&(g->node_list[list_index]),&edgevalue);

}

void DeleteGraph(struct Graph* g){

    int i;
    struct NodeList* current;

    for (i = 0; i < g->nodelist_size;i++){

        current = g->node_list[i];

        DeleteNodeList(current);
    }

    free(g);


}

void PrintGraph(struct Graph* g){

    int i;


    for (i = 0;i < g->nodelist_size;i++){

        PrintNodeList(g->node_list[i]);
        printf("\n");

    }
}



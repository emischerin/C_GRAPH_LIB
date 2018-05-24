#include <stdio.h>
#include <stdlib.h>
#include "Graph.h"
#include "NodeList.h"

int main()
{
    struct Graph* g = NewGraph(3);



    AddEdge(g,0,0);
    AddEdge(g,13,0);
    AddEdge(g,15,0);

    AddEdge(g,77,1);
    AddEdge(g,0,1);
    AddEdge(g,32,1);

    AddEdge(g,87,2);
    AddEdge(g,64,2);
    AddEdge(g,0,2);



   PrintGraph(g);

   DeleteGraph(g);


}

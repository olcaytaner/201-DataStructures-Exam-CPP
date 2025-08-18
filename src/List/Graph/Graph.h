//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_GRAPH_H
#define DATASTRUCTURES_CPP_GRAPH_H


#include "EdgeList.h"
#include "../../General/AbstractGraph.h"

namespace list {

    class Graph : public AbstractGraph{
    private:
        EdgeList *edges;
    public:
        explicit Graph(int vertexCount);
        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);

        Graph(Graph* graphs, int size);
        int bidirectionalEdges();
        bool breadthFirstSearch(bool *visit, int index1, int index2);
        Graph* intersection(const Graph& g2, int v);
        Graph* inverseGraph();
        bool isBipartite();
        bool isCircular();
        bool isFullyConnected();
        bool isRing();
        bool isSame(Graph g);
        Graph merge(const Graph &g2, int v);
        int numberOfCompleteSubGraphs();
        bool outgoingListSame();
        void shortest(int *lengths, int start);
        void shortest(int **path, bool *visited, int start);
        int shortestIn2Hops(int index1, int index2);
        int *twoHops(int index);
    protected:
        void depthFirstSearch(bool* visited, int fromNode) override;
        void breadthFirstSearch(bool* visited, int startNode) override;
    };

}
#endif //DATASTRUCTURES_CPP_GRAPH_H

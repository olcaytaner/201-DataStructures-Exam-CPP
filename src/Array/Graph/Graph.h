//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_GRAPH_H
#define DATASTRUCTURES_CPP_GRAPH_H


#include "../../General/AbstractGraph.h"
#include "../../List/Graph/Edge.h"

namespace array{
    class Graph : public AbstractGraph{
    private:
        int** edges;
    public:
        explicit Graph(int vertexCount);
        ~Graph();
        void addEdge(int from, int to);
        void addEdge(int from, int to, int weight);

        int capitalCity();
        Graph constructGraphFromNumbers(int N);
        bool hasCycle(int v, bool* visited);
        bool isCompleteBipartite();
        bool isStarGraph();
        bool isSubGraph(const Graph& g);
        bool isTwoColorable();
        int lengthOfCircle();
        int **numberOfWaysInTwoMoves();
        int outDegree(int index);
        bool outgoingListSame();
    protected:
        void depthFirstSearch(bool* visited, int fromNode) override;
        void breadthFirstSearch(bool* visited, int startNode) override;
    };

}


#endif //DATASTRUCTURES_CPP_GRAPH_H

//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#include "Graph.h"
#include "../../Array/DisjointSet.h"
#include "../Queue.h"
#include "../../Array/Heap/MinHeap.h"

namespace list {

    Graph::Graph(int _vertexCount) : AbstractGraph(_vertexCount){
        edges = new EdgeList[vertexCount];
        for (int i = 0; i < vertexCount; i++) {
            edges[i] = EdgeList();
        }
    }

    void Graph::addEdge(int from, int to) {
        Edge* edge = new Edge(from, to, 1);
        edges[from].insert(edge);
    }

    void Graph::addEdge(int from, int to, int weight) {
        Edge* edge = new Edge(from, to, weight);
        edges[from].insert(edge);
    }

    Graph::~Graph() {
        delete[] edges;
    }

    void Graph::depthFirstSearch(bool *visited, int fromNode) {
        Edge* edge;
        int toNode;
        edge = edges[fromNode].getHead();
        while (edge != nullptr){
            toNode = edge->getTo();
            if (!visited[toNode]){
                visited[toNode] = true;
                depthFirstSearch(visited, toNode);
            }
            edge = edge->getNext();
        }
    }

    void Graph::breadthFirstSearch(bool *visited, int startNode) {
        Edge* edge;
        int fromNode, toNode;
        Queue queue = Queue();
        queue.enqueue(new Node(startNode));
        while (!queue.isEmpty()){
            fromNode = queue.dequeue()->getData();
            edge = edges[fromNode].getHead();
            while (edge != nullptr) {
                toNode = edge->getTo();
                if (!visited[toNode]){
                    visited[toNode] = true;
                    queue.enqueue(new Node(toNode));
                }
                edge = edge->getNext();
            }
        }
    }

    int Graph::numberOfCompleteSubGraphs() {
        return 0;
    }

    void Graph::shortest(int *lengths, int start) {

    }

    void Graph::shortest(int **path, bool *visited, int start) {

    }

    Graph* Graph::inverseGraph() {
        return nullptr;
    }

    Graph* Graph::intersection(const Graph& g2, int v) {
        return nullptr;
    }

    int *Graph::twoHops(int index) {
        return nullptr;
    }

    bool Graph::isRing() {
        return false;
    }

    Graph::Graph(Graph* graphs, int size) : AbstractGraph(graphs[0].vertexCount) {

    }

    bool Graph::breadthFirstSearch(bool *visit, int index1, int index2) {
        return true;
    }

    int Graph::bidirectionalEdges() {
        return 0;
    }

    bool Graph::isSame(Graph g) {
        return true;
    }

    int Graph::shortestIn2Hops(int index1, int index2) {
        return 0;
    }

    Graph Graph::merge(const Graph &g2, int v) {
        return Graph(0);
    }

    bool Graph::outgoingListSame() {
        return false;
    }

    bool Graph::isBipartite () {
        return true;
    }

    bool Graph::isCircular() {
        return false;
    }

    bool Graph::isFullyConnected() {
        return false;
    }
}

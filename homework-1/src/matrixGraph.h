#ifndef HOMEWORK_1_MATRIXGRAPH_H
#define HOMEWORK_1_MATRIXGRAPH_H


#include "../graph.h"

template<typename T = void>
class MatrixGraph : public IGraph<T> {

public:

    MatrixGraph() = default;

    MatrixGraph(IGraph<T> *_oth);

    virtual ~MatrixGraph() = default;

    virtual int VerticesCount() const;

    virtual bool CheckEdge(int from, int to) const;
    
    virtual void AddEdge(int from, int to, T &&element);

    virtual void GetNextVertices(int vertex, std::vector<int> &vertices) const;

    virtual void GetPrevVertices(int vertex, std::vector<int> &vertices) const;

    virtual void DeepFirstSearch(int vertex, std::vector<int> &vertices) const;

    virtual void BreadthFirstSearch(int vertex, std::vector<int> &vertices) const;

    virtual void TransformToArc(std::vector<std::pair<T, std::pair<int, int>>> &graph) const;

private:

    virtual void ConstructFromArc(std::vector<std::pair<T, std::pair<int, int>>> &graph);

    virtual void DoDFS(int vertex, std::vector<int> &vertices, std::vector<bool> &used) const;

    virtual void DoBFS(int vertex, std::vector<int> &vertices, std::vector<bool> &used) const;


public:

    std::vector<std::vector<T>> m_graph;

};

#endif //HOMEWORK_1_MATRIXGRAPH_H

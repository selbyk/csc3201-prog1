template <class DataType> class Tree
{
private:
	bool isAVL;
	Node<DataType> * root = NULL;

public:
    bool insert(DataType x);
    bool search(DataType x);

    DataType min();
    DataType max();
    void inorder-traversal();

};

template <class DataType> class Node
{
private:
	DataType data;
	Node<DataType> * left = NULL;
	Node<DataType> * right = NULL;
public:
	Node<DataType> * successor(DataType x);
    Node<DataType> * predecessor(DataType x);
    Node<DataType> * min();
    Node<DataType> * max();

};

#include <iomanip>
#include <iostream>

using namespace std;

//1.双亲表示法节点结构定义

#define MAX_TREE_SIZE 100

typedef int TElemType;
typedef struct PTNode//结点，结点存储的数据是parent或者兄弟域或者孩子域
{
    TElemType data;
    TElemType parent;
}PINode;
struct PTree
{
    PINode nodes[MAX_TREE_SIZE];
    int n,r;
};
    

//2.孩子表示法节点结构定义
typedef struct CTNode//孩子结点    child是数据域，next用来存储指向某节点的下一个孩子节点的指针
{
    int child;
    struct CTNode *next;
}*ChildPtr;

 typedef struct//表头结构
 {
    TElemType data;
    ChildPtr firstchild;
 }CTBox;
 typedef struct 
 {
    CTBox nodes[MAX_TREE_SIZE];
    int n,r;
 }CTree;



typedef struct CTNode//孩子节点
{
    int child;
    struct CTNode*next;//孩子节点里面存储的是孩子和孩子的下一个节点的指针
}*ChildPtr;
typedef struct//表头结构
{
    TElemType data;
    ChildPtr firstchild;
} CTBox;

//首先是需要一个数的结构，将所有表头弄成一个数组，表头是一个数组，表头里面存放的是child的
 typedef struct CTree
{
    CTBox nodes[MAX_TREE_SIZE];
    int n,r;    
};

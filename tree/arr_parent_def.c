
#define MAX_TREE_SIZE 100
typedef int TElemType;
typedef struct PTNode
{
  TElemType data;   /* data */
  int parent; // parent location
} PTNode;

typedef struct
{
  PTNode node[MAX_TREE_SIZE];
  int r, n;  // r: root location n: node total
} PTree;
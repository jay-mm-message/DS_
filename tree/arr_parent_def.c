
typedef struct PTNode
{
  int data;   /* data */
  int parent; // parent location
} PTNode;

typedef struct
{
  PTNode node[100];
  int r, n;  // r: root location n: node total
} PTree;
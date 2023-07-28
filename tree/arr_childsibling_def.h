

typedef struct
{
  int data;
  int firstchild;
  int rightsib;
} SIBNode;

typedef struct
{
  SIBNode nodes[100];
  int r, n;
} CTree;
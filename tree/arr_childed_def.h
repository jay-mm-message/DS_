
typedef struct CTNode {
  int child;
  struct CTNode *next;
} *ChildPtr;

typedef struct {
  int data;
  ChildPtr firstChild;
} CTBox;

typedef struct {
  CTBox nodes[100];
  int r, n;
} CTree;
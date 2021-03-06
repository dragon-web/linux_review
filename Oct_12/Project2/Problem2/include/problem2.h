
//Error code
#define InsertError             0
#define DeleteError             1
#define SearchError             2
#define SearchMaxError          3
#define SearchMinError          4
#define SearchSuccessorError    5
#define searchPredecessorError  6
#define FailDeleteAllError      7

typedef struct BinarySearchTreeNode {
  int value;
  struct BinarySearchTreeNode *left,*right;
  struct BinarySearchTreeNode *parent;
}BinarySearchTreeNode;


typedef enum{false=0,true=!false} bool ;

BinarySearchTreeNode *insert(BinarySearchTreeNode **Tree, int X);
BinarySearchTreeNode *searchNode(BinarySearchTreeNode *Tree, int X);
BinarySearchTreeNode *findMaxNode(BinarySearchTreeNode *Tree);
BinarySearchTreeNode *findMinNode(BinarySearchTreeNode *Tree);

BinarySearchTreeNode *findSuccessorNode(BinarySearchTreeNode *Tree, int X);
BinarySearchTreeNode *findPredecessorNode(BinarySearchTreeNode *Tree, int X);
bool deleteBST(BinarySearchTreeNode *Tree, int X);
void deleteNode(BinarySearchTreeNode* bt);

void makeEmptyNode(BinarySearchTreeNode **Tree);
void pererror_function(int error_core);

void inorderWalk(BinarySearchTreeNode *Tree);
void preorderWalk(BinarySearchTreeNode *Tree);
void postorderWalk(BinarySearchTreeNode *Tree);




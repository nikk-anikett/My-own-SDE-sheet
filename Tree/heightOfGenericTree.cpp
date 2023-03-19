#include <bits/stdc++.h>
using namespace std;
int nodeHeight(int tree[], int node, int marked[],int height[]) {
  /* Checking if it is a root node or not*/
  if (tree[node] == -1) {
    /* Marking the root node of tree*/
    marked[node] = 1;
    return 0;
  }

  /* Checking if the node is visited or not*/
  if (marked[node])
    return height[node];

  /* Marking the node for future*/
  marked[node] = 1;

  /* Applying recursion till we get marked node or root node*/
  height[node] = 1 + nodeHeight(tree, tree[node],marked, height);

  return height[node];
}

int getHeight(int parent[], int n) {
  /* To store max height*/
  int Maxheight = 0;

  /* Declaring height array and marked node array*/
  int marked[n], height[n];

  /* Initializing both marked and height
  array with n-0 elements*/
  for (int i = 0; i < n; i++) {
      marked[i] = 0;
      height[i] = 0;
    }

  for (int i = 0; i < n; i++) {

    /* If the node is not marked*/
    if (!marked[i])
      height[i] = nodeHeight(parent, i,
        marked, height);

    /* Comparing and storing max height */
    Maxheight = max(Maxheight, height[i]);
  }

  return Maxheight;
}
int main() {
 int parent[] = { -1,0,0,0,1,1,1,2,3};
  int n = sizeof(parent) / sizeof(parent[0]);
  cout << "The height of this generic tree given as parent array is: " << getHeight(parent, n);
  return 0;
}
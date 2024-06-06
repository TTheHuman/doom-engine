// Tree traversal in C

#include <stdio.h>
#include <stdlib.h>
#include "WadReader.h"

struct node {
  int item;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root, int player_pos) {
  if (root == NULL) return;
    if(player_pos <= inorderTraversal){
      inorderTraversal(root->left, player_pos);
      printf("%d ->", root->item);
      inorderTraversal(root->right, player_pos);
    }
    else{
      inorderTraversal(root->right, player_pos);
        printf("%d ->", root->item);
      inorderTraversal(root->left, player_pos);
  }
}

// Create a new Node
struct node* createNode(int value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
  root->left = createNode(value);
  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
  root->right = createNode(value);
  return root->right;
}


void init(){
  openPath();
}


int main() {
  init();
  struct node* root = createNode(0);
  insertLeft(root, -5);
  insertRight(root, 20);
  insertLeft(root->left, -10);
  insertRight(root->right, 23);

  printf("Inorder traversal \n");
  inorderTraversal(root, -6);
}
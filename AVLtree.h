#pragma once
#include <iostream>
#include <math.h>
using namespace std;


template <typename T>
class AVLnode
{
	T value;
	AVLnode*parent;
	AVLnode*rightChild;
	AVLnode*leftChild;
	int balanceFactor;
	int leftBranchHeight;
	int rightBranchHeight;
	AVLnode();

};

template <typename T>
class AVLTree
{
private:
	AVLnode*root;
	AVLnode*findNode(T input);
	void balancetree(AVLnode*x);
	void leftRotation(AVLnode*x);
	void rightRotation(AVLnode*x);
	void insert(T input);
	void reportHeight(AVLnode *x);
	void disintegrate(AVLnode *x);
	int treeHeight;
	int findHeight();
public:
	void remove(T input);
	void search(T input);
	AVLTree();
	void printHeight();
};

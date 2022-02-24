/****************************************************************************************************************************************************
 *  File Name                   : BinaryTree.h
 *  File Location               : /algos/src/avikodak/v1/lib/tree/BinaryTree.h
 *  Created on                  : Feb 19, 2022 :: 8:49:58 PM
 *  Author                      : avikodak
 *  Testing Status              : TODO
 *  URL                         : TODO
 ****************************************************************************************************************************************************/

/****************************************************************************************************************************************************/
/*                                                                 INCLUDES                                                                         */
/****************************************************************************************************************************************************/

#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <stack>
#include <queue>
#include <stdexcept>
#include <limits.h>
#include <stdint.h>
#include <memory>
#include "BinaryTreeNode.h"

#ifndef AVIKODAK_V1_LIB_TREE_BINARYTREE_H_
#define AVIKODAK_V1_LIB_TREE_BINARYTREE_H_

template<typename T>
class BinaryTree {
public:

    BinaryTree(std::vector<T> userInput);

    BinaryTree(int numberOfNodes, int minValue = INT_MIN,
            int maxValue = INT_MAX);

    virtual ~BinaryTree();

    virtual void insert(T value);

    virtual void preOrderTraversal();

    virtual void inOrderTraversal();

    virtual void postOrderTraversal();

    virtual int size();

    virtual int height();

    void deleteTree();

private:
    virtual void preOrderTraversalUtil(std::unique_ptr<BinaryNode<T>> node);

    virtual void inOrderTraversalUtil(std::unique_ptr<BinaryNode<T>> node);

    virtual void postOrderTraversalUtil(std::unique_ptr<BinaryNode<T>> node);

    std::unique_ptr<BinaryNode<T>> root;
};

#endif /* AVIKODAK_V1_LIB_TREE_BINARYTREE_H_ */

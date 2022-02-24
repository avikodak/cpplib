/****************************************************************************************************************************************************
 *  File Name                   : BinaryTreeNode.h
 *  File Location               : /algos/src/avikodak/v1/lib/tree/BinaryTreeNode.h
 *  Created on                  : Feb 19, 2022 :: 9:05:02 PM
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

#ifndef AVIKODAK_V1_LIB_TREE_BINARYTREENODE_H_
#define AVIKODAK_V1_LIB_TREE_BINARYTREENODE_H_

template<typename T>
class BinaryNode {

public:
    BinaryNode(T value) {
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }

private:
    T value;
    std::unique_ptr<BinaryNode> left;
    std::unique_ptr<BinaryNode> right;
};

#endif /* AVIKODAK_V1_LIB_TREE_BINARYTREENODE_H_ */

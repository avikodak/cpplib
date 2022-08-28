/****************************************************************************************************************************************************
 *  File Name                   : SingleLinkedList.h
 *  File Location               : /libv2/v1/sill/SingleLinkedList.h
 *  Created on                  : Aug 19, 2022 :: 1:55:14 PM
 *  Author                      : avikodak
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

#ifndef V1_SILL_SINGLELINKEDLIST_H_
#define V1_SILL_SINGLELINKEDLIST_H_

struct ListNode {
    int val;
    ListNode *next;
    ListNode() :
            val(0), next(nullptr) {
    }
    ListNode(int x) :
            val(x), next(nullptr) {
    }
    ListNode(int x, ListNode *next) :
            val(x), next(next) {
    }
};

#endif /* V1_SILL_SINGLELINKEDLIST_H_ */

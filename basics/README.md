# basic data structures

Before array, there are both set and list.

* set: the types of elements in a set may be different and there is no order for these elements.

* list: linear list, finite and ordered, its length is changeable.

* array: in C++, the elements in an array are the same type. in Python, there is list which allows different data types.

## array and linked list

In the computer, we have array and linked list. Associated with the array, the index is basically the address or location of any element in the array that has the linear and consecutive physical storage underlying.

The way to access and modify any element in a data structure such as array, linked list, and binary tree is limited to its implementations of a particular programming language.

| op | array | linked list |
| -- | ----- | ----------- |
| read/write | index | traverse with next pointer |
| search | index |  traverse |
| insert | dynamic change | modify the pointer |
| delete | dynamic change | modify the pointer |

So the big difference between array and linked list is as follows:

* array has the index for operations on its elements that are physically and logically stored in a consecutive space.

* linked list has the next pointer for operations on its nodes that are physically or logically distributed in a memory space. The pointer is the connection.

## stack and queue

| ops | stack | queue |
| --- | ----- | ----- |
| insert | push to its top | push to its tail |
| delete | pop from its top | pop from its head |
| | Last In First Out | First In First Out (FIFO) |

Both stack and queue are limited to its capacity. It could overflow after keeping pushing into them. Another issue is the opposite, underflow where either the stack or queue is empty.

## strings

String is very close to array but it has many more operations. The type of its element is char in C++.

| ops | strings |
| --- | ------- |
| compare | == in C++ or Python, not all other PL |
| concatenate |  mutable in C++, immutable in Python etc. |

## hash table




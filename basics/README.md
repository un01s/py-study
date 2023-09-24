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

## stack and queue (abstract data structures)

| ops | stack | queue |
| --- | ----- | ----- |
| insert | push to its top | push to its tail |
| delete | pop from its top | pop from its head |
| | Last In First Out | First In First Out (FIFO) |

Both stack and queue are limited to its capacity. It could overflow after keeping pushing into them. Another issue is the opposite, underflow where either the stack or queue is empty.

There are different implementations of both stack and queue.

## strings

String is very close to array but it has many more operations. The type of its element is char in C++.

| ops | strings |
| --- | ------- |
| compare | == in C++ or Python, not all other PL |
| concatenate |  mutable in C++, immutable in Python etc. |

## hash table

Hash table is also called hash map. It is a data structure that maps keys to values. It uses a hash function to compute an index into an array of buckets or sslots from which the desired value can be found.

Ideally, the hash function will assign each key to a unique bucket, but most hash table designs employ an imperfect hash function, which might cause hash collisions where the hash function generates the same index for more than one key. Such collisions are typically accommodated in some way.

| PL | implementation |
| -- | -------------- |
| C++ | unordered_map |
| Go | map |
| Java | HashSet, HashMap, LinkedHashSet, LinkedHashMap |
| Python | dict |
| Ruby | Hash |
| Rust | HashMap, HashSet |

The idea is to use hash table for quick insertion and search.

 
## Reference

* [DSA guide](https://tsejx.github.io/data-structure-and-algorithms-guidebook/)


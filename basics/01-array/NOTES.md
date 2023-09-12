# loop invariant, array, linked list, and binary tree

## data structures

One data type has two properties: the storage-space specifics and its access approach. It ties more closely to the hardware. Data structures abstract this one-level up. 

* Array: consecutive, same data type, linear access with its index (starting from 0)

* Linked list: a list of nodes, each node has its value (or data) and a pointer to the next node. The last node has a null pointer.

* binary tree: a tree of nodes, each node may have two children nodes at most.

## loop invariant  

In computer science, a loop invariant is a property of a program loop that is true before (and after) each iteration.

```C++
int binaryFind(const vector<int>& a, int key) {
    int low = 0, high = a.size() - 1;
    int mid = low + high / 2;
    while(low <= high) {
        if(a[mid] > key)
            high = mid - 1;
        else if(a[mid] < key)
	    low = mid + 1;
        else if (a[mid] == key)
            return mid;
        mid = low + (high-low) / 2;
    }
    return -1; // Not found
}
```

The idea of binary search is simple. 

If ```key``` is in ```a```, then the index of ```key``` must be within ```[0, a.size()-1]```. So the initialization goes with ```int low = 0;``` and ```int high = a.size()-1;```.

In the loop, there are different cases:

1. if ```a[mid] > key```, then key is possible in ```a[0...mid-1]```. The invariant is still true.

2. if ```a[mid] < key```, then key is possible in ```a[mid+1...high]```. the invariant is still true.

3. if ```a[mid] == key```, then return. 

After the loop, ```low > high```, key is not in the array.


# exceptions

Design and implement a SmartArray class.  
A SmartArray:  
* allows storing a collection of ints.  
* has a constructor that takes an int parameter which specifies the maximum number of ints the SmartArray can hold.
* Has a method at()  which returns a reference to the int at that index. 
* Has a method copy() for copying one SmartArray to another.        
* throws an exception if you try to access an out-of-bounds index.

Usage example:

```
SmartArray sa = SmartArray(5);

sa.at(0) = 2;
cout << sa.at(0) << endl; // 2
SmartArray sa2 = sa.copy();
sa2.at(7) = 99;  // index out of bounds: throws exception
```


**HINT 1:**  You'll need to get memory from the heap.  Don't forget to de-allocate it at the appropriate time!  
**HINT 2:**  If it helps, you can use a standard-library container like std::array inside your class.  
  
**EXTRA CREDIT:**
1)  use operator overloading to accomplish indexing and copying.  
2)  Make a constructor that accepts an initializer_list of integers to store.  


# cpp-module-01
Exercises of Module 01 from C++ modules by 42 school
## Few notes 
Memory allocation, pointers to members,
references, switch statement


1- memory alloc   
    => new (heap), automatic (stack), or static memory
    destroy by "delete" in case of heap 
    int x = 10;  
     => Stored in data segment (if global) or stack (if local)

2 - ptr to members (ref to obj's member)
 => allow you to refer to a class's member function or member variable dynamically.



3 - ref in cpp


what is referencing ?
a reference in C++ is such that it does not need to exist.
Use the initializer list for references (Weapon&) because references must be initialized at creation. (constructor level)

func (Weapon& w)  => pass by reference , means mustn't be null
ref vs  & ? 

// Linked list is an linear and dynamic data structure
// It is an linear data structure where each element is a seperate object

// WHY NOT TO USE Arrays INSTEAD OF LL
// 1.Arrays have fixed size, they are required to be initialized at the time of declarations
// 2.Maximum storage capacity of arrays is 10^6 - 10^7
// 3.As the data is stored contiguosly, deletion becomes an expensive task


// Difference between arrays and LL
// Elements are not stored in contiguous memory blocks
// Insertion and deletion in 0(1) time(If we have a pointer to the target)
// Easy implementation with Queues
// More Space efficient


//Advantages of Arrays over LL
// 1. Random access is possible
// 2. Cache Friendliness
// 3. Easy to use 
// 4. Less declarations 

// Implementing a simple linked list

// Structure of a linked list 
// NODE --- NODE ---- NODE (An LL with three nodes)

// Each Node contains two items-
// 1. Data
// 2. An pointer (reference) to the next node-


struct Node{
    int data;
    struct Node* next;
};

//Each node of the linked list is represented
//  by a structure that contains a data field and 
//  a pointer of the same type as itself, 
//  Such structures are called "Self Refrential Structures"

//Self Refrential Structures - Are those type of structures that 
// Have one or more pointers which point to the same type of structure, as their members

// Quick Question 1 Why we need Linked List - To efficiently use memory and remove disadvantages of using arrays
// Quick Question 2 Why ne need structures to make LL - To containarize two types of data items
// Quick Question 3 Why to use pointers - To be able to refer to next node with the help of memory address
// Quick Question 4 Why Self Refrential Structures - We have two items in our LL, Data of any type like (int,float,char) 
//                                                   and a pointer (to point to the next similar type of node), which is 
//                                                   a special type of variable that holdes memory address of another variable
//                                                   here we need to our pointer to point to next node, So we need a datatype also
//                                                   the data type of a pointer is defined by the datatype of the variable it points to 
//                                                   here we need our pointer to point to next node and hence it takes the datatype struct node.
//                                                   Thus, this type of arrangement is know as self refrential structures

// Aplications of Linked List 
//             1. Data Structures - Stacks , Queues, Hash tables, Graphs, Polynomial Arithmetic, Sparse Matrices
//             2. In Undo Functionality
//             3. Music/Media Players
//             4. Continuous data stream


// Basic Operations on Singly Linked List

// 1. Insertion 
//    a. At beginning  O(1)
//    b. At end O(N)
//    c. At Specific Position - O(N)

// 2. Deletion 
//    a. From Beginning - O(1)
//    b. From the end - O(N)
//    c. At specific position - O(N)
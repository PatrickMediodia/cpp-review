
### **Programming Problem 1: Memory Management with Classes and Pointers**

**Question 1:**  
Write a C++ class called `DynamicArray` that manages a dynamically allocated array of integers. The class should support: - A constructor that takes an integer size and allocates the appropriate memory on the heap. - A deep copy constructor. - A custom assignment operator. - A destructor to free the memory. - A method to print the contents of the array.

Demonstrate the class in a `main` function where: - You create two instances of `DynamicArray` and assign one to the other using both the copy constructor and assignment operator. - Modify the array in one instance and show that the other instance remains unaffected (proving the deep copy).

---

### **Programming Problem 2: Implementing a Templated Stack**

**Question 2:**  
Write a C++ templated class `Stack` that can store elements of any data type. The class should: - Dynamically allocate memory for the stack. - Have a copy constructor, assignment operator, and destructor. - Support basic stack operations: `push`, `pop`, and `print`.

Test this class in a `main` function where: - You push different data types onto separate stacks (e.g., `int`, `double`, `std::string`). - Demonstrate copying one stack to another using the copy constructor and assignment operator.

---

### **Exposition Questions**

---

### **Question 3: Encapsulation and Access Control in C++**

Explain the concept of encapsulation in C++ and how access control is implemented using the `public`, `private`, and `protected` keywords. Provide examples where needed.

---

### **Question 4: Memory Management: Stack vs Heap in C++**

Discuss the difference between stack and heap memory in C++. When would you use stack memory, and when would you use heap memory? Provide code examples to illustrate your answer.

---

### **Question 5: Copy Constructor vs Assignment Operator in C++**

Explain the difference between a copy constructor and an assignment operator in C++. Why is it necessary to write custom versions for classes that manage dynamic memory?

---

### **Question 6: Constructors and Destructors in C++**

What is the role of a constructor and destructor in C++? How do custom constructors and destructors affect resource management in classes that allocate memory dynamically?

---

### **Question 7: Templated Types in C++**

What are templated types in C++? Why are they useful? Provide an example of a templated function that works with different data types.
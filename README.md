# Constructors-and-destructors

##  Theory

###  Constructors in C++

A **constructor** in C++ is a **special member function** of a class that is executed automatically when an object of the class is created. Its primary purpose is to **initialize the data members of an object** so that the object starts in a well-defined state.

####  Key Properties of Constructors:
1. The name of the constructor must be the same as the class name.  
2. It does not have a return type (not even `void`).  
3. It is called automatically when the object is created.  
4. Constructors can be **overloaded** (multiple constructors with different parameters).  
5. If no constructor is defined, the compiler provides a **default constructor**.  

####  Types of Constructors:
**1. Default Constructor**
--Takes no arguments.
--Automatically initializes objects with default values.

```

class Student {
    int age;
public:
    Student() {  // default constructor
        age = 18;
    }
};

```


**2. Parameterized Constructor**
--Accepts parameters to initialize an object with specific values.

```

class Student {
    int age;
public:
    Student(int a) {  // parameterized constructor
        age = a;
    }
};

```

**2. Copy Constructor**
--Creates a new object as a copy of an existing object.

```

class Student {
    int age;
public:
    Student(int a) { age = a; }
    Student(const Student &s) {  // copy constructor
        age = s.age;
    }
};

```
---
###  Destructors in C++

A **destructor** is a special member function that is automatically invoked when an object goes out of scope or is explicitly deleted. Its purpose is to **free resources** such as memory, file handles, or network connections that were acquired during the object’s lifetime.
- It has the same name as the class preceded by a tilde ~.
- It does not take any arguments and does not return any value.
- Only one destructor can exist per class (no overloading).

---
####  Key Properties of Destructors:
1. Has the same name as the class but preceded with a tilde `~`.  
2. Takes no arguments and does not return any value.  
3. Only one destructor per class is allowed (cannot be overloaded).  
4. Called automatically in the **reverse order of object creation** (last created object is destroyed first).  

---

```

class Student {
public:
    ~Student() {  // destructor
        cout << "Destructor called, object destroyed" << endl;
    }
};

```

## Programs
### **1. Constructor Inside the Class**
This program defines a class **`Marks`** with five subjects as data members. The **constructor** is used to take input for all subjects when an object is created. In `main()`, when Marks `m1`; is declared, the constructor runs automatically and prompts the user to enter marks. No destructor or other functions are defined, so the program ends after input.

**Algorithm:**  
1. Start the program.  
2. Define `Student` class with private data members.  
3. Write a **constructor inside the class** that takes input for all details.  
4. Write `display()` to print values.  
5. In `main()`, create object `s` → constructor is invoked automatically.  
6. Call `display()` to show stored details.  
7. End.  



---

### **2. Constructor Outside the Class**
This program defines a class **`Marks`** with five subject marks as data members. The **constructor** takes input for all marks when an object is created. A separate **`display()`** function is defined to print the entered marks. In `main()`, creating object `m1` calls the constructor for input, and then `m1.display()` shows the stored marks.

**Algorithm:**  
1. Start.  
2. Declare class `Student` with constructor prototype and `display()` function.  
3. Define `Student::Student()` outside the class.  
4. Take input for student details in constructor.  
5. In `main()`, create object `s`.  
6. Constructor is automatically invoked.  
7. Display details using `display()`.  
8. End.  


---

### **3. Parameterized Constructor**
This program defines a class **`Num`** with two integers as data members. It uses a **parameterized constructor** to initialize the values of `num1` and `num2` at the time of object creation. The **`display()`** function is used to print these values. In `main()`, when object `n1` is created with values `(23, 78)`, the constructor sets them, and `display()` outputs the result.

**Algorithm:**  
1. Start.  
2. Define class `Practice` with integer variables.  
3. Define constructor with two parameters `(m, n)` and assign values.  
4. Create method `display()` to print `a` and `b`.  
5. In `main()`, create object `p(7, 8)` → constructor initializes values.  
6. Call `display()`.  
7. End.  



---

### **4. Copy Constructor (Printing 2 numbers)**
This program demonstrates the use of a **copy constructor** in C++. The class **`Num`** has two integers that are initialized either through a **parameterized constructor** or by copying another object. When object `n2` is created from `n1`, the **copy constructor** is called, and it duplicates the values of `n1` into `n2`. The `display()` function prints the values of both objects.

**Algorithm:**  
1. Start
2. Define a class Num with two integer data members: num1 and num2.
3. Define a parameterized constructor Num(int a, int b) that assigns a to num1 and b to num2.
4. Define a copy constructor Num(const Num &n) that copies the values of num1 and num2 from another object n and prints "Copy constructor is called!".
5. Define a member function display() that outputs the values of num1 and num2.
6. In the main() function:
  --Create object n1 with values (23, 78) using the parameterized constructor.
  --Call n1.display() to print its values.
  --Create another object n2 as a copy of n1. The copy constructor is invoked automatically.
  --Call n2.display() to print the copied values.
7. End



---

### **5. Copy Constructor (Book Details)**
This program defines a class **`Book`** with data members for book name, author, and price. It uses a **parameterized constructor** to initialize these details when an object is created. A **copy constructor** is also defined, which duplicates the values of one object into another and prints a message. In `main()`, book details are entered, stored in object `b1`, displayed, and then copied into `b2` using the copy constructor.

**Algorithm:**  

1. Start
2. Define a class Book with three data members: b_name (string), b_auth (string), and price (float).
3. Define a parameterized constructor Book(string b, string a, float p) that assigns the values of book name, author, and price.
4. Define a copy constructor Book(const Book &b) that copies the data members from another object and prints "Copy constructor is called!".
5. Define a member function display() that outputs the book details.
6. In the main() function:
  --Take input from the user for book name, author, and price.
  --Create object b1 using the parameterized constructor and display its details.
  --Create another object b2 as a copy of b1, which automatically calls the copy constructor.
  --Display the details of b2.
7. End


-

### **6. Destructor (counting no. of cars addednd a discarded)**
This program demonstrates the use of **constructors and destructors** with a **static counter**. Each time a `Car` object is created, the constructor increments `count` and displays the number of objects. When an object goes out of scope, the destructor is called, decrementing `count` and showing how many objects remain. It illustrates **object creation and destruction order in C++**.

**Algorithm:**  
1. Start
2. Declare a global integer variable count = 0 to keep track of the number of objects.
3. Define a class Car with:
  --A constructor that increments count by 1 and prints the number of objects created.
  --A destructor that decrements count by 1 and prints the number of objects destroyed.
4. In the main() function:
  --Create three objects c1, c2, and c3. Each constructor call increases and displays the count.
  --Create a new block { ... } inside which two more objects c4 and c5 are created. Their constructors update and display the count.
  --When the block ends, destructors of c4 and c5 are called automatically, reducing the count.
  --At the end of main(), destructors of c1, c2, and c3 are called, again decreasing the count step by step.
5. End
 


---

### **7. Destructor (without specifying constructor)**
This program shows the working of a **destructor** in C++. The class **`Date`** has only a destructor, which prints `"Destructor Called"` whenever an object is destroyed. In `main()`, four objects (`d1, d2, d3, d4`) are created, and additional temporary objects are created inside the loop. As each object goes out of scope, its destructor is automatically invoked. Here, constructor isn't specifically written but, by default constructor is present in the code.

**Algorithm:**  
1. Start
2. Define a class Date with a destructor that prints "Destructor Called" whenever an object is destroyed.
3. In the main() function:
  --Create four objects d1, d2, d3, d4.
  --Enter a for loop that runs 4 times (i = 0 to 3).
  --In each iteration, create a temporary object d1 inside the loop.
  --At the end of each iteration, the loop’s local object d1 goes out of scope, and its destructor is called.
4. After the loop ends, when main() completes, the destructors of d1, d2, d3, d4 (created outside the loop) are invoked automatically in reverse order of creation.
5. End  



---

## Conclusion

We learned the use of default, parameterized and copy constructors to initialize objects in various ways. Observed the role of destructors in object cleanup and tracking object lifecycle. These concepts are fundamental in managing resources effectively in object-oriented programming.
---

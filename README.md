# C++ Object-Oriented Programming (OOP) - ITI Intake 46

This repository contains the assignments and laboratory work completed during the **Object-Oriented Programming (OOP)** course as part of the **Information Technology Institute (ITI)** intensive training program, Intake 46.

## 🎯 Purpose
The goal of these assignments is to demonstrate a solid understanding of OOP principles using **C++**, focusing on building scalable, modular, and efficient code.

## 🛠 Core Concepts Implemented
The following concepts have been applied throughout these assignments:
* **Encapsulation:** Using Classes, Access Modifiers (Private/Public/Protected), and Getters/Setters.
* **Abstraction:** Designing Abstract Classes and Pure Virtual Functions.
* **Inheritance:** Implementing Simple, Multiple, and Multilevel Inheritance.
* **Polymorphism:** Method Overriding, Virtual Functions, and Dynamic Binding.
* **Operator Overloading:** Customizing operators for user-defined types.
* **Memory Management:** Dynamic allocation, Copy Constructors, and Destructors.
* **Template Classes:** Writing generic code for multiple data types.

### Day 01: Structs vs. Classes & Encapsulation
* **Focus:** Fundamental differences in access modifiers.
* **Key Learning:** Demonstrated that `struct` members are `public` by default, while `class` members are `private`.
* **Implementation:** Developed a `Complex Number` logic using both approaches with proper Getters and Setters.


### Day 02: Class Relationships (The Core of Design)
Implemented the three main types of relationships to understand object lifetimes and memory ownership:
1. **Association:** Objects collaborate by passing addresses (Pointers) to methods without owning them.
2. **Aggregation (Weak Ownership):** `Rect` and `Circle` hold pointers to external `Point` objects. The points can outlive the shapes.
3. **Composition (Strong Ownership):** `Rect` and `Circle` fully own their `Point` objects. Their lifetimes are strictly tied together.


### Day 03: Inheritance Strategies
Explored different inheritance models to build a scalable Shape hierarchy:
* **Single & Multilevel:** `Shape` -> `Polygon` -> `Rectangle`.
* **Multiple Inheritance:** `Colored_Rectangle` inheriting from both `Rectangle` and `Color`.
* **Abstract Classes:** Used **Pure Virtual Functions** in the `Shape` class to enforce a strict interface.
* **Access Control:** Applied `protected` and `private` inheritance (e.g., `Square` from `Rectangle`) for implementation reuse.


### Day 04: Deep Copy & Memory Management
* **Focus:** Handling the Heap and the "Rule of Three".
* **Key Learning:** Implemented a custom **Copy Constructor** to solve the **Shallow Copy** problem.
* **Implementation:** A `Student` class with dynamically allocated memory (`new[]`) and proper cleanup in the Destructor (`delete[]`).


### Day 05: Friendship, Operator Overloading & Templates
Advanced features to make custom types behave like built-in types:
* **Friend Functions:** Used to grant external functions access to private data (e.g., `viewBalance`).
* **Operator Overloading:** Overloaded `+`, `-`, `++`, `--`, `+=` and casting operators (`int`, `string`) for a `Time` class.
* **Generic Programming:** Developed a **Class Template** for a `Stack` data structure that works with both primitive types (`int`) and custom objects (`Employee`).

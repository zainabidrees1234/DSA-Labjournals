# Stack Implementation in C++

This repository contains **static and dynamic stack implementations** in C++.

---
## 📂 **Project Structure**

```
├── dynamic.h           # Header file for dynamic stack implementation
├── dynamicmain.cpp     # Main program for dynamic stack testing
├── static.h            # Header file for static stack implementation
├── staticmain.cpp      # Main program for static stack testing
├── stack.cpp           # Implementation of static stack functions
├── README.md           # Project documentation
```

---
## 🚀 **Features**

### **1. Static Stack Implementation**
- Uses a **fixed-size array**.
- Supports operations:
  - Push
  - Pop
  - Peek (Top Element)
  - Reverse a string

### **2. Dynamic Stack Implementation**
- Uses a **template-based dynamic array**.
- Supports operations:
  - Push
  - Pop
  - Infix to Postfix conversion
  - Postfix evaluation
  - Parenthesis validation

---
## 🛠️ **Compilation & Execution**

### **1. Compile Static Stack Code:**
```sh
g++ staticmain.cpp stack.cpp -o static_stack
./static_stack
```

### **2. Compile Dynamic Stack Code:**
```sh
g++ dynamicmain.cpp -o dynamic_stack
./dynamic_stack
```

---
## 🔗 **Usage Guide**

### **Static Stack Menu Options:**
1️⃣ **Push & Pop operations**
2️⃣ **Reverse a string**

### **Dynamic Stack Menu Options:**
1️⃣ **Push & Pop operations**
2️⃣ **Parenthesis validation**
3️⃣ **Infix to Postfix conversion**
4️⃣ **Postfix evaluation**

---
## 📝 **Notes**
- Ensure that **stack.cpp** is compiled alongside **staticmain.cpp**.
- Templates are **fully implemented in dynamic.h**.
- Input expressions should be **properly formatted** for conversion functions.




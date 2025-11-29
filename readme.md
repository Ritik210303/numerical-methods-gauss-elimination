# Gauss Elimination Method in C

This project was created in **Semester 2 (Computer Oriented Numerical Methods)** as part of my Bachelor's coursework.  
It implements **Gauss Elimination** to solve a system of linear equations using C.

---

## 📘 Features

- Accepts any N×(N+1) augmented matrix  
- Performs **forward elimination**  
- Performs **back substitution**  
- Handles floating-point input  
- Outputs solution for x₁, x₂, x₃ ... xₙ  

---

## 📂 Project Structure

```
gauss-elimination-c/
├── src/
│   └── gauss_elimination.c
├── docs/
│   └── Case_Study_Report.pdf
└── README.md
```

---

## ▶️ How to Run

### **Using GCC (recommended)**

```bash
cd src
gcc gauss_elimination.c -o gauss
./gauss
```

### **Using Windows (CodeBlocks / Dev-C++ / VS Code)**

1. Open the project folder  
2. Compile `gauss_elimination.c`  
3. Run the generated executable  

---

## 🧪 Sample Input

```
3
2 8 4 2
2 5 1 5
4 10 -1 1
```

## ✅ Output

```
x1 = 11.000
x2 = -4.000
x3 = 3.000
```

---

## 🎓 Academic Context

This was created for:

**Course:** CA409 – Computer Oriented Numerical Methods  
**Objective:** Implement numerical algorithms using C  
**Topic:** Solving linear systems using Gauss Elimination  

---

## 📄 License

Free to use for learning and academic purposes.

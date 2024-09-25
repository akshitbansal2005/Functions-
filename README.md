```markdown
# Pointer Operations in C++

## Aim:
To study pointer operations.

## Software Used:
Visual Studio Code

## Theory:

In C++, functions can receive parameters in different ways, influencing how the function manipulates the provided values. Two common methods are **Call by Reference** and **Call by Value**.

### Call by Reference
- **Definition**: Call by Reference means passing the address (reference) of the actual parameters to the function. This allows the function to modify the original values.
- **Working**: The function receives pointers to the variables, and operations performed inside the function affect the original variables directly.

### Call by Value
- **Definition**: Call by Value means passing a copy of the actual parameters to the function. Changes made to the parameters inside the function do not affect the original variable.

## Algorithms:

### Algorithm 1: Call by Value

1. **Start**
2. **Define Function** `swap(int x, int y)`:
   - **Input**: Two integers `x` and `y`.
   - **Output**: Swapped values of `x` and `y`.
3. **Inside Swap function**:
   - Create a temporary variable `temp`.
   - Assign the value of `x` to `temp`.
   - Assign the value of `y` to `x`.
   - Assign the value of `temp` to `y`.
4. **Inside main Function**:
   - Define two integers `a` and `b` with values 5 and 2, respectively.
   - Call `swap(a, b)`.
   - Print the value of `a`.
   - Print the value of `b`.
5. **End**

### Algorithm 2: Call by Reference

1. **Start**
2. **Define Function** `swap(int *x, int *y)`:
   - **Input**: Pointers to two integers `x` and `y`.
   - **Output**: Swapped values of the integers pointed to by `x` and `y`.
3. **Steps**:
   - Make a temporary variable `temp`.
   - Assign the value pointed to by `x` to `temp` (`temp = *x`).
   - Assign the value pointed to by `y` to the location pointed to by `x` (`*x = *y`).
   - Assign the value of `temp` to the location pointed to by `y` (`*y = temp`).
4. **Inside main Function**:
   - Define integers `a` and `b` with values 5 and 2, respectively.
   - Call `swap(&a, &b)` function.
   - Print the value of `a`.
   - Print the value of `b`.
5. **End**

## Example Code:

### Call by Value:
```cpp
#include<iostream>
using namespace std;

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5;
    int b = 2;
    cout << "Before swap (Call by Value):" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swap(a, b);

    cout << "After swap (Call by Value):" << endl;
    cout << "a = " << a << ", b = " << b << endl; // a and b remain unchanged
    return 0;
}
```

### Call by Reference:
```cpp
#include<iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5;
    int b = 2;
    cout << "Before swap (Call by Reference):" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swap(&a, &b);

    cout << "After swap (Call by Reference):" << endl;
    cout << "a = " << a << ", b = " << b << endl; // a and b are swapped
    return 0;
}
```

## Conclusion:
We learned about the operations on pointers and understood the differences between **Call by Value** and **Call by Reference** in C++.
```# Functions-

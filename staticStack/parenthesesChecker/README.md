# Parentheses Validator

A straightforward command-line utility developed in C that verifies the balance of parentheses in a given expression. This project utilizes a static stack to efficiently manage the pairing and nesting of parentheses, providing quick feedback on the correctness of input strings.


## Features

-   **Validation of Parentheses**: Checks for balanced parentheses in various types of expressions.
-   **Support for Nested Parentheses**: Handles multiple layers of nesting, ensuring that each opening parenthesis has a corresponding closing one.
-   **Interactive Input**: Allows users to enter expressions and receive immediate results.

## Installation

 **1.  Clone the repository**:


   ```bash
   git clone git@github.com:AbdelhakDouiba/Algorithms-and-Data-Strucutres.git
   cd Algorithms-and-Data-Strucutres/staticstack/parenthesesChecker/
   ```
    
    
  **2. Compile the Code**:
    
  ```bash
  gcc *.c *.h -o expressionEvaluate
  ```
    
**3. Run the Application**:
    
  ```bash
  ./expressionEvaluate
  ```

## Usage

-   **Launching the Validator**: Start the program and input an expression to check for balanced parentheses.
    
-   **Input Instructions**:
    
    -   Enter any string containing parentheses, such as `{[()()]}` or `{[(])}`, and press Enter to validate.
    -   The output will indicate whether the parentheses are balanced or unbalanced.

## Example

```plaintext
Enter an expression: {[(a+b)*c]}
Congalutations. the expression is correct!

Enter an expression: {[(a+b)*c[]}
The expression is wrong!
```

## Contributions

Contributions are welcome! Please fork the repository and create a pull request for any feature additions or bug fixes.


## Contact Author
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/douiba-abdelhak/)
[![X](https://img.shields.io/badge/x.com-000000?style=for-the-badge&logo=x&logoColor=white)](https://x.com/douiba_abdelhak)

# Flex-Bison-Python

This repository contains a mini project for creating a compiler for Python code. The project includes a Lexer to analyze and tokenize the source code and a Parser to analyze the grammar and syntax of the source code, including indentation.

## Features

The Flex-Bison-Python project has the following features:

-   Lexer to analyze and tokenize the source code, including indentation
-   Parser to analyze the grammar and syntax of the source code
-   Ability to compile and run Python code with proper indentation

## Technologies Used

The Flex-Bison-Python project is developed using the following technologies:

-   Flex for lexical analysis
-   Bison for parsing
-   C for coding

## Usage

To use the Flex-Bison-Python project, follow these steps:

1.  Clone the repository to your local machine.
    
2.  Navigate to the root directory of the project in a terminal window.
    
3.  Compile the `scan.l` file using the following command:
    

-   `flex scan.l`
    
-   Compile the `parser.y` file with debug mode disabled using the following command:
    

`bison -d parser.y`

Note: If you want to compile with debug mode enabled, use the following command instead:


-   `bison -d parser.y --debug`
    
-   Compile the executable file using the following command:
    
-   `gcc parser.tab.c lex.yy.c -o a_random_name`
    
-   Run the compiled file using the following command:
    
-   `./a_random_name example.py`
    

The compiled file will analyze and tokenize the Python source code and check for proper indentation before executing the code.


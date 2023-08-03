<h1>0X0A.C - argc, argv</h1>

<h2>LESSONS</h2>

-- What does argc and argv mean
-- How to use these functions
-- Argumens to main
-- How to compile with unused variables

<h3>argc and argv</h3>

In programming, the terms "argument count" and "argument vector" are often used in the context of command-line interfaces and function calls. They refer to the number of arguments passed to a function or program and the array or list of those arguments, respectively. Let's delve into each term

1. Argument Count:
Argument count, often abbreviated as "argc," represents the number of arguments passed to a program or function when it is invoked, In C it is referred to to the count of command line arguments, including the name of the program itself. The value of argc tells you how many arguments have been provided to the program.

EXAMPLE = ./my-school arg1 arg2 arg3.(This will have four elements) 
"my-school", "arg1", "arg2", "arg3". 

2. Argument Vector:
Often abbrievated as "argv" refers to an array(or vector) of strings that holds the actual values of the arguments passed to a program or function. In C programming it is an array of strings where each element represnts a command line argument, including the program name.

EXAMPLE = 
-- argv[0] = ./my-school
-- argv[1] = arg1
-- argv[2] = arg2
-- argv[3] = arg3
-- argv[4] = NULL // Represents the end of argument list

<h3>Arguments to main</h3>
In programming the "main" function is the entry point for the program.

The main function typically has two parameters 'argc and argv'. These parameters allow the program to access the command line arguments passed by the user.

EXAMPLE

--'argc'(Argument Count): Represent the number of command line arguments provided to the program, including the program's name itself

-- 'argv' (Argument Vector): Represents the array(or vector) of strings that holds the actual command line arguments. Each element in the array is a string representing an argument. First element(argv[0]) usually holds the name of the program.

<h3>How to compile with unused variables</h3>

1. Using compiler Directives
-- "Wunused-variable" to enable warnings for unused variable
-- "Wno-unused-variable" to supress these warnings

EXAMPLE = gcc -o my-school my-school.c Wunused-variable

2. Using Attributes
-- "_ _attribute_ _((unused))" to mark as intentionally unused
EXAMPLE = int unused_variable _ _ attribute_ _((unused));

<h2>NOW I WILL SOLVE PROJECTS USING THE 'ARGV' AND 'AGRC' FUNCTION</h2>

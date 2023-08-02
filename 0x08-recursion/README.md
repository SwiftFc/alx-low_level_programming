<h1>0x08. C - Recursion</h1>

<h2>WHAT IS RECURSION</h2>

Recursion is a programming concept where a function calls itself in order to solve a problem. In other words, a recursive function is a function that includes a call to itself within its own definition. Recursion is a powerful and elegant technique used in programming to solve problems that can be broken down into smaller instances of the same problem.

Key characteristics of recursive functions:

Base Case: Every recursive function must have a base case that defines when the recursion should stop. It's the condition that allows the function to return a result without making further recursive calls.

Recursive Case: The function also includes a recursive case, where it calls itself with a smaller or simpler input, closer to the base case. This is how the problem is broken down into smaller subproblems.

Progress Towards Base Case: In each recursive call, the function should make progress towards the base case. Otherwise, the recursion could lead to an infinite loop.

Recursion is often used to solve problems that can be naturally divided into smaller instances of the same problem. Examples of problems that can be solved using recursion include factorial calculations, computing Fibonacci numbers, traversing tree structures.

<h2>How To Implement a Recursion</h2>
1. Identify the Base Case: Every recursive function needs a base case that defines when the recursion should stop. The base case is the simplest possible scenario for the problem you're trying to solve. When the base case is reached, the function returns a result without making further recursive calls.

2. Implement the Recursive Case: In addition to the base case, the function should include a recursive case where it calls itself with a smaller or simpler input. This recursive call breaks down the problem into smaller subproblems that are closer to the base case.

3. Ensure Progress Towards Base Case: In each recursive call, the input should get closer to the base case. If the input remains the same or gets larger, the recursion could lead to an infinite loop.

4. Combine Results: If needed, combine the results of recursive calls to solve the overall problem. This might involve mathematical operations, combining arrays or lists, etc.

5. Test and Debug: Test your recursive function with different inputs, including the base case and various scenarios, to ensure it behaves as expected. Debug any errors or unexpected behavior.

<h2>IMPORTANT TO NOTE</h2>
Recursion is a programming technique that should be used when a problem can be naturally broken down into smaller, similar subproblems.

<h3>In this project I will write programs using recursive functions</h3>

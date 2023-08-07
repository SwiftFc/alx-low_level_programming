<h1>MALLOC</h1>

<p>
malloc is a function in the C programming language (and some other programming languages like C++) that stands for "memory allocation". It is used to dynamically allocate a block of memory on the heap, which is a region of memory used for dynamic memory allocation. This allows you to request memory at runtime for your program's data structures, such as arrays, structs, or other custom data types</p>

<p>The syntax for  malloc is: void *malloc(size_t size);
Here, size is the number of bytes you want to allocate. The function returns a pointer to the first byte of the allocated memory block. The returned pointer has a type of void *, which can be cast to the appropriate pointer type.

<p>For example, if you want to allocate memory for an array of integers, you can do
int *myArray = (int *)malloc(10 * sizeof(int));
</p>

<p>Let Us solve some examples
How many bytes will this statement allocate?

malloc((sizeof(char) * 10) + 3)
Answer is 13</p>

<p>How many bytes will this statement allocate?

malloc(sizeof(unsigned int) * 3
Answer is 12</p>

<p>How many bytes will this statement allocate?

malloc(sizeof(char) * 8)
Answer is 8</p>

<p>How many bytes will this statement allocate?

malloc(sizeof(int) * 6)
Answer is 24</p>

<p>How many bytes will this statement allocate?

malloc(12)
Answer is 12</p>

<p>How many bytes will this statement allocate?

malloc(sizeof(int) * 20)
Answer is 80</p>

<p>It's important to note that you need to include the <stdlib.h> header to use the malloc function.

When you are done using the allocated memory, you should free it using the free function to prevent memory leaks
free(myArray);

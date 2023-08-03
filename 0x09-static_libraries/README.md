<h1>STATIC LIBRARY</h1>

<h2>WHAT IS A LIBRARY</h2>
A library is a file conataining several objects files that can be used as a single entity in a linking phase of a program.

<h2>WHAT IS A STATIC LIBRARY</h2>
Static libraries are just collection of objects files that are linked into the program during the linking phase od complialtion. It contains function, classes, or resources that can be reused across multiple projects. 
Static libraries becomes part of the final executable, making the application more efficient in terms of memeory usage, but updates require recompilation.

<h2>HERE IS AN OVERVIEW OF HOW TO START THE PROCESS TO CREATE A STATIC LIBRARY</h2>

1. WRITE CODE: wirte the code in the programming language of your choice

2. COMPILE: compile source source code files int object files using a compiler (example gcc source.c -o source)

3. ARCHIVE: Use an archiving tool("ar" command) to bundle the object files into a single archive file with a "a" extention(example "sourcelib.a"). 
-- "ar" command is the basic tool used to create static libraries also known as "archiver" . This can be used to also modify files in the static library, list the names of object files in the library.

-- We use a command like  ( ar rc lib.a sour.file sour1.file) to create a static library.
<h3>Explanation</h3>
Here the command creates a static library named lib.a and puts copies of the object files 'sour.file' , 'sour1.file' in it.
'rc' command - 'r' flags tells it to replace older object files with new object. 
'c' cretes teh library if it doesnt exist.

4. ranlib: The command used to create or update the index

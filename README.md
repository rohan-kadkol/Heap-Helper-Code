# Heap and Heap Sort Sample Code

## Description

This branch contains
1. FULLY IMPLEMENTED code
2. FULLY FUNCTIONAL executables

## Intructions to run the code (on Linux/Mac and Windows)

### 1) heap.c

In the command line, cd to the current location

```
(Linux/Mac and Windows)
cd "<location of the download location of this folder>"
```

Next run the executables

```
(Linux/Mac)
./executables/heap.exe

(Windows)
executables/heap.exe
```

#### Cases

* To insert a node x in the heap, ```INSERT x```

* To extract min, ```EXTRACT_MIN -1```. You can enter any number instead of -1. We have to enter a number as we defined our input of the form "%s %d". Hence, even if we don't need an integer (%d), we still need to input one.

* To exit, ```EXIT -1```. We add -1 after exit for the same reason we add -1 after EXTRACT_MIN as explained above.

#### Sample Output

```
$ ./executables/heap
INSERT 5
5 
INSERT 10
5 10 
INSERT 3
3 10 5 
INSERT 23
3 10 5 23 
INSERT 17
3 10 5 23 17 
INSERT 2
2 10 3 23 17 5 
INSERT 87
2 10 3 23 17 5 87 
INSERT 1
1 2 3 10 17 5 87 23 
EXTRACT_MIN -1
Minimum = 1
2 10 3 23 17 5 87
EXTRACT_MIN -1
Minimum = 2
3 10 5 23 17 87
EXTRACT_MIN -1
Minimum = 3
5 10 87 23 17
EXIT -1
```

### 2) heap_sort.c

In the command line, cd to the current location

```
(Linux/Mac and Windows)
cd "<location of the download location of this folder>"
```

Next run the executables

```
(Linux/Mac)
./executables/heap_sort.exe

(Windows)
executables/heap_sort.exe
```

#### Cases

The code sorts the input array specified in the code. No input array is provided through the command line.

#### Sample Output

```
$ ./executables/heap_sort.exe 
8 3 5 10 38 4 27 2 9 34 
2 3 4 5 8 9 10 27 34 38
```

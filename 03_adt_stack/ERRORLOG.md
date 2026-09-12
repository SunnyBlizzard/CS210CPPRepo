Error 1:

C:\Users\alecm\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe --build C:\Users\alecm\OneDrive\Desktop\CS210\cmake-build-debug --target 03_adt_stack -- -j 12
[ 33%] Building CXX object CMakeFiles/03_adt_stack.dir/03_adt_stack/Stack.cpp.obj
C:\Users\alecm\OneDrive\Desktop\CS210\03_adt_stack\Stack.cpp: In member function 'int Stack::top() const':
C:\Users\alecm\OneDrive\Desktop\CS210\03_adt_stack\Stack.cpp:24:1: warning: no return statement in function returning non-void [-Wreturn-type]
24 | }
| ^
[ 66%] Linking CXX executable 03_adt_stack.exe
[100%] Built target 03_adt_stack

Problem Description: I have a function, top() that returns an int but had no return because I have not implemented it yet.
Solution: I added "return 1" temporarily so I could test my methods I had written.
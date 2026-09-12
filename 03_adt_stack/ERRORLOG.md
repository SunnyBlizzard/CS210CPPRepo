Error 1:

C:\Users\alecm\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe --build C:\Users\alecm\OneDrive\Desktop\CS210\cmake-build-debug --target 03_adt_stack -- -j 12
[ 33%] Building CXX object CMakeFiles/03_adt_stack.dir/03_adt_stack/Stack.cpp.obj
C:\Users\alecm\OneDrive\Desktop\CS210\03_adt_stack\Stack.cpp: In member function 'int Stack::top() const':
C:\Users\alecm\OneDrive\Desktop\CS210\03_adt_stack\Stack.cpp:24:1: warning: no return statement in function returning non-void [-Wreturn-type]
24 | }
| ^
[ 66%] Linking CXX executable 03_adt_stack.exe
[100%] Built target 03_adt_stack

Error Description: I have a function, top() that returns an int but had no return because I have not implemented it yet.
Solution: I added "return 1" temporarily so I could test my methods I had written.

Error 2:

C:\Users\alecm\OneDrive\Desktop\CS210\cmake-build-debug\03_adt_stack.exe
C:/Users/alecm/AppData/Local/Programs/CLion/bin/mingw/lib/gcc/x86_64-w64-mingw32/15.2.0/include/c++/bits/stl_vector.h:12
63: std::vector<_Tp, _Alloc>::reference std::vector<_Tp, _Alloc>::operator[](size_type) [with _Tp = int; _Alloc = std::a
llocator<int>; reference = int&; size_type = long long unsigned int]: Assertion '__n < this->size()' failed.

Process finished with exit code 3

Error Desc: This is an index out of bounds error.
Solution: Using line breaks I discovered it is being caused by my push() method. The problem was I was trying to access data_, which is not an array so it was automatically out of bounds. 
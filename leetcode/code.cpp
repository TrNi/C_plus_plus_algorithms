#include <iostream>

// class and struct both in c++ can have public or private members.
// class: undeclared / default is private.
// struct: undeclared / default is public.
// both are the same, struct is a class with default public.
/*
        int* tmp; // address spec occupies 64-bit due to OS. Any address only points to a memory that is 1byte long.
        char* tmp2;
        void* tmp3;

        int a = *tmp


        --------------------

        int a = 10;
        int *b = &a;


        int a[10]; // this is a pointer
        int *b = a; // not int*b = &a !!

        *b == a[0]
        *(b + 1) == a[1] == 1[a]
        *(b + 2) == a[2] == 2[a]
        *(b + k*sizeof(b)) == b[k] == a[k] == k[a]
        
        ----------------------

        int *i = 10; // int* = address on RHS, can be specified in integer, hex, whatever number system. 
        int  j = 10;
        i = i + 4; => i + 4*sizeof(i) --> here is where type of pointer matters. take type of pointer i, add 4 such memory addresses.
        j = j + 4;

        

        --------------------------

        char a = *((char*)tmp + 1);
        


struct obj {
    int a;
};

class upointer {
    int count = 1; // for shared pointer
    void *pointer;

    public: // constructor and deconstructor are typically pointer.
    upointer(void *p) {
        this->pointer = p;
    }

    upointer(void *p, int b, int c =20) {
        this->pointer = p;
    }

    void *point() {
        return this->pointer;
    }

    ~upointer() {
        delete this->pointer;
    }
};

void *b;

int func1() {
    upointer x((void *) new vector); /// one way to encapsulate automatic deletion of custom heap objects that we create pointers of.

    b = x.point();G:\core_software\mingw_c++\w64devkit\bin/ld.exe: cannot find /d: No such file or directory
G:\core_software\mingw_c++\w64devkit\bin/ld.exe: cannot find /c: No such file or directory
G:\core_software\mingw_c++\w64devkit\bin/ld.exe: cannot find mkdir G:\Development\C++\leetcode\build && g++ -g G:\Development\C++\leetcode\code.cpp -o G:\Development\C++\leetcode\build\code.exe && G:\Development\C++\leetcode\build\code.exe: Invalid argument
collect2.exe: error: ld returned 1 exit status

 *  The terminal process "cmd.exe /d /c g++ /d /c "mkdir "G:\Development\C++\leetcode\build" && g++ -g "G:\Development\C++\leetcode\code.cpp" -o "G:\Development\C++\leetcode\build\code.exe" && "G:\Development\C++\leetcode\build\code.exe""" terminated with exit code: 

    unique_ptr<vector> y(new vector);

    // unique_ptr<vector> y();
    y->tmp;
    y + 1
    vector* a = y; // cannot
    unique_ptr a =y; // cannot
}

int func2() {
    *b 
}*/

/*
unique pointer: first property: same as upointer above: automatic deletion / free-up of heap memory that  was pointed to, when going out of scope and deleting the pointer.

second: vector* a = y; // cannot
unique_ptr a =y; // cannot

y = new unique pointer // can

shared pointer: allows other pointers to also point to the same address. Each new pointer to the same object increases the count by 1. 
When all shared ptrs die, count==0 and shared pointer is deleted.


vector* a = y; // cannot

shared_ptr a=y // can

Two advantages of smart (unique, shared pointers): one: automatic deletion and two: not being able to access deallocated memory.

.ptr() to get a raw pointer from a smart pointer, and overcome advantages and get same pitfalls as raw pointers.

*/

/*
struct vector : obj, obj1, obj2 { // subclass vector with parent obj.
    int tmp;

    vector(int sz){
        this->vsz = sz; // this is a pointer to current object being defined itself, so either of these 2 approaches.
        (*this).vsz = sz;
        this->a; // accessible since public.
        printf("hello");
    }

    ~vector(){
        printf("bye");
    }
    private:
        int vsz=0; // private is  only allowed within current object / class def, not even to children. check for protetcted.
};


{
    vector x;
    x.tmp;

    vector* z = &x;
    vector *y = new vector;
    auto y = new vector; // auto pointer, type taken care of by object being allocated for.
    
    int a = (*y).tmp; // wrong: y.tmp
    int a = y->tmp;

    delete y;


    std::vector<int> a;
    a.push_back(10);
    ...

    for (auto i : a)
        std::cout << i << "\n";
}
*/
int main() {
    int a[10];

    int* b = new int [10];
    //int b[] 
    //int b[10] 

    // std::endl  = "\n" + flush() (wait until all is printed on screen, can continue afterwards)
    // just use '\n' for faster logging
    // std::endl <<  can have more.
    std::cout<< b[0]<<" " <<   b[10]<< std::endl;


    // using namespace
    //cout<< b[0]<<    b[10]<<  b[11] << endl;
    return 0;
}



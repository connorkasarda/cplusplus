#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    // Pointer --> variable that points to address of another variable
    //         --> all pointers have the same size
    //         --> position of * does not matter

    // Declares pointers (NOT POINTING TO ANYWHERE YET! BAD!)
    int *ptr_num1 {};
    double *ptr_frac_num1 {};

    // Pointers explicitely initialized to nullptr (DON'T DO THIS!)
    int *ptr_num2 {nullptr};
    double *ptr_frac_num2 {nullptr};

    // Declares and initializes data to pointers
    int int_var1 {42};
    int *ptr_int_var1 {&int_var1}; // Uses the "address of" operator (&)

    // Changes address stored in a pointer
    int int_var2 {21};
    ptr_int_var1 = &int_var2;

    // Pointer to char variable
    char *ptr_char_var {nullptr};
    char char_var {'A'};
    ptr_char_var = &char_var;

    // Initializes char pointer with string literal (POINTERS AND ARRAYS HAVE RELATIONSHIP)
    char *ptr_message {"Hello World"}; // Some compilers refuse to compile this, so be careful!

    // Prints both message and dereferenced pointer
    cout << "The message is: " << ptr_message << endl;
    cout << "The value stored at ptr_message is: " << *ptr_message << endl; // Uses the dereference operator (*)

    // Modifies pure array initialized with string literal
    char message[] {"Hello There!"};
    message[11] = '?';
    cout << "The message is: " << message << endl;

    return 0;
}
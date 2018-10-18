//To use standard I/O
#include <iostream>
#include <string>
using namespace std;

//To use array containers
#include <array>

int main() {

    //region I/O
    //cin can't parse entered data. Shouldn't be used on complex programs
    int age;
    string testInputStr;

    cout << "Enter some number" << endl;
    cin >> age;
    cout << "Entered data: " << age << endl;

    //printf() isn't type-ssfe, so it can't print an std::string.
    //To print std:.string, std::cout should be used.
    //std::string can be converted to const char* with str.c_str().
    cout << "Enter something" << endl;
    getline(cin, testInputStr);
    printf("Entered [%s]", testInputStr.c_str());

    //endregion

    /*//region OPERATORS
    int a = 1, b = 2, c = 3;

    // First assigns 'b' a value, then assigns a the result of the right-most operation.
    a = (b = 3, b+2);

    printf("a = (b = 3, b+2): %d", a);
    //endregion OPERATORS*/

    /*//region ARRAYS
    // C-style basic array. Size must be calculated since sizeof(arr) gets the size in bytes of the array.
    int myArr[5];
    int myArrSize = sizeof(myArr) / sizeof(*myArr);

    // Array container. This one uses arr.size() to get the size of the array.
    std::array<int, 5> myContArray;

    for (int n = 0; n < myArrSize; n++) {
        myArr[n] = n;
        printf("%d\n", n);
    }

    printf("*****\n");

    for (int i = 0; i < myContArray.size(); ++i) {
        myContArray[i] = i;
        printf("%d\n", i);
    }
    //endregion ARRAYS*/

//    std::cout << "Hello, World!" << std::endl;
    return 0;
}
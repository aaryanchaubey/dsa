/*
-------------------------------------------------------------------------------------------------------------------------------------------------------
                                                            S T L   T U T O R I A L S
-------------------------------------------------------------------------------------------------------------------------------------------------------
*/

#include<bits/stdc++.h> // - STL Library Header File
using namespace std;    // C++ Default Library containing all necessary function and other stuffs

int main(){
    
    /*
    ---------------------------------------------------------------------------------------------------------------------------------------------------
                                                                I T E R A T O R S
    ---------------------------------------------------------------------------------------------------------------------------------------------------
    */ 
    
    // begin(), end(), rbegin(), rend()

    array<int, 5> arr = {1, 2, 3, 4, 5};
    array<int, 5>::iterator it;

    // arr.begin() -> Points to the first address conatining 1
    // arr.end() -> Points to the last address + 1
    // arr.rbegin() -> Points to the last address containing 5
    // arr.rend() -> Points to the first address -1 
    
    /*
    ---------------------------------------------------------------------------------------------------------------------------------------------------
                                                                C O N T A I N E R S
    ---------------------------------------------------------------------------------------------------------------------------------------------------
    
    - Arrays
    - Vectors
    - Pairs
    - Maps (Unordered Maps, Ordered Maps, Multimaps)
    - Sets (Unordered Sets, Ordered Sets, multisets)

    */ 

    /*
    ---------------------------------------------------------------------------------------------------------------------------------------------------
                                                    C O N T A I N E R - 1   :   A R R A Y S
    ---------------------------------------------------------------------------------------------------------------------------------------------------
    */ 

    // Max size of Array : for int, char, double -> 10^6 | for boolean -> 10^7 (within main) 
    // Max size of Array : for int, char, double -> 10^7 | for boolean -> 10^8 (oustide main -> gloabally)

    // Declaring and Initialising
    array<int, 3> arr1 = {1, 2, 3};

    array<int, 3> arr2 = {1};       
    // arr = {1, 0, 0} - It implies only first index element is 1 and since the remaining elements are not mentioned, they becomes zero

    // -------------------------------------------------------------------------------------------------------------------------------------------
    
    // Travering the array container

    // 1.a - Traditional way (it is here pointer)
    for(it = arr1.begin(); it != arr1.end(); it++){
        cout << *it << " ";                 // returns all arr1 elements -> 1 2 3
    }
    cout << endl;
    
    // 1.b - It by default starts from first and goes till the last -> for each loop (it is here actual element)
    for(auto it: arr1){
        cout << it << " ";                  // returns all arr1 elements -> 1 2 3
    }
    cout << endl;

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // Operations on Arrays

    int index = 0;
    
    // 2. at 
    cout << arr2.at(index) << " " << endl;  // returns element at index -> 1
    
    // 3. get()
    cout << get<0> (arr2) << " " << endl;   // returns element at index -> 1 
    
    // 4. []
    cout << arr2[index] << " " << endl;     // returns element at index -> 1
    
    // 5. fill 
    arr2.fill(10);                          // fills the entire array with given value -> arr2 = {10, 10, 10}
    for(auto it: arr2){
        cout << it << " ";
    }
    cout << endl;
    
    // 6. front
    cout << arr1.front() << " " << endl;    // returns the frontmost element -> 1
    
    // 7. back
    cout << arr1.back() << " " << endl;     // returns the backmost element -> 1
    
    // 8. size
    cout << arr1.size() << " " << endl;     // returns the size of the container -> 3
    
    // 9. max_size
    cout << arr1.max_size() << " " << endl; // returns the max size of the container -> 3
    
    // 10. empty
    arr1.empty() ? cout << "Array empty" << endl : cout << "Array not empty" << endl;
    
    // 11. swap
    for(auto it: arr1){
        cout << it << " ";
    }
    cout << "-> ";
    
    array<int, 3> arr3 = {31, 32, 33};
    arr1.swap(arr3);                       // swap arr1 elements with arr3 elements and vice versa -> arr1: {31, 32, 33} ; arr3: {1, 2, 3}        
    
    for(auto it: arr1){
        cout << it << " ";
    }
    cout << endl;

    /*
    ---------------------------------------------------------------------------------------------------------------------------------------------------
                                                    C O N T A I N E R - 2   :   V E C T O R S
    ---------------------------------------------------------------------------------------------------------------------------------------------------
    */

    // Max size of Vector : int, char, double -> 10^6 | for boolean -> 10^7 (within main) 
    // Max size of Vector : int, char, double -> 10^7 | for boolean -> 10^8 (oustide main -> gloabally)

    // Declaring and initialising vector
    vector<int> vect;                     // creates a vector of size 0
    vector<int> vect1 = {1, 2, 3};        // creates a vector with given elements -> {1, 2, 3}
    vector<int> vect2(3, 4);              // creates a vector with given size and all elements as per the given element -> {4, 4, 4}

    vector<int>::iterator itt;

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // Travering the vector container

    // 1.a - Traditional way (it is here pointer)
    for(itt = vect.begin(); itt != vect.end(); itt++){
        cout << *itt << " ";                 // returns all arr1 elements -> 1 2 3
    }
    
    // 1.b - It by default starts from first and goes till the last -> for each loop (it is here actual element)
    for(auto itt: vect2){
        cout << itt << " ";                  // returns all vect2 elements -> 1 2 3
    }
    cout << endl;
    
    // -------------------------------------------------------------------------------------------------------------------------------------------
    
    // Operations on vector
    
    // 2. push back, emplace_back (emplace_back is faster than push_back)
    vect.push_back(1); 
    vect.emplace_back(2);
    
    for(auto itt: vect){
        cout << itt << " ";                  // returns all vect2 elements -> 1 2
    }
    cout << endl;
    
    // 3. pop back
    vect.pop_back();                        // deletes the backmost element -> 2
    for(auto itt: vect){
        cout << itt << " ";                  // returns all vect2 elements -> 1 2
    }
    cout << endl;
    
    // 4. Copy a vector into another vector
    vector<int> vect3(vect2);                               // 4.a -> {4, 4, 4}
    // vector<int> vect3(vect2.begin(), vect2.end());       // 4.b -> {4, 4, 4}  -  It works as [) : from vect2.begin() to vect2.end() - 1
    for(auto itt: vect3){
        cout << itt << " ";                  // returns all vect2 elements -> 1 2
    }
    cout << endl;
    
    // 5. swap two vectors
    swap(vect1, vect2);                     // swaps two vector elements
    for(auto itt: vect1){
        cout << itt << " ";                 // returns all vect1 elements -> 4 4 4
    }
    for(auto itt: vect2){
        cout << itt << " ";                 // returns all vect2 elements -> 1 2 3
    }
    cout << endl;
    
    // 6. clear
    vect1.clear();
    
    // Note: All Array operations are supported by vector like front, back, size, max_size etc
    cout << vect2.front() << " " << endl;
    cout << vect2.back() << " " << endl;
    cout << vect2.size() << " " << endl;
    cout << vect2.max_size() << " " << endl;
    vect2.empty() ? cout << "Vector 2 empty" << endl : cout << "Vector 2 not empty" << endl;
    
    // -------------------------------------------------------------------------------------------------------------------------------------------
    
    // Declaring and Initialising 2-D Vectors
    vector<vector<int>>::iterator ittt;
    
    vector<vector<int>> vect2d;
    
    // Create a vector of 10 x 20
    vector<vector<int>> vect2d1(10, vector<int> (20, 0));
    
    // Create a vector of 10 x 20 x 30
    vector<vector<vector<int>>> vect3d(10, vector<vector<int>> vect2d1(20, vector<int> (30, 0)));
    
    vect2d.emplace_back(vect);
    
    vect1.emplace_back(31);
    vect1.emplace_back(32);
    vect1.emplace_back(32);
    vect2d.emplace_back(vect1);
    
    vect2d.emplace_back(vect2);
    vect2d.emplace_back(vect3);
    
    // Printing a 2d vector
    for(auto ittt: vect2d){
        for(auto itt: ittt){
            cout << itt << " ";
        }
        cout << endl;
    }
    
    // Note: Again All Array operations are supported by 2d vector also like front, back, size, max_size etc
    cout << vect2d.size() << " " << endl;
    
    
    return 0;
}
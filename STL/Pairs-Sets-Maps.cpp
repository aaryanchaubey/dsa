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
                                                    C O N T A I N E R - 3   :   P A I R S
    ---------------------------------------------------------------------------------------------------------------------------------------------------
    */ 
    
    // Pairs is a container that stores any two things inside it -> It can be a pair of any two things 
    // {int, int}, {int, string} -> Normal data types
    // {int, pair}, {int,  pair<pair<int, int>, int> }  -> Even constructors

    pair<int, int> p = {1, 2};
    cout << p.first << " " <<  p.second << " ";

    /*
    ---------------------------------------------------------------------------------------------------------------------------------------------------
                                                    C O N T A I N E R - 4   :   S E T S
    ---------------------------------------------------------------------------------------------------------------------------------------------------
    */ 

    //                                                  4.A   :   O R D E R E D   S E T

    // -------------------------------------------------------------------------------------------------------------------------------------------
    
    // Ordered Set is a container in STL that stores only unique elements in an increasing order i.e element at index 0 will be the lowest and element at index (size - 1) will be the largest
    
    // Declaring and Initialising Set
    set<int> s;                                                     // creates an empty set 
    set<int> s1 = {1, 2, 3, 4, 5, 6, 7};                            // creates a set of 3 elements -> {1, 2, 3} : It will not take the common elements
    set<int> s2 = {1, 2, 3};
    
    // Declaring a iterator sit for all set of type int
    set<int>::iterator sit;
    
    // -------------------------------------------------------------------------------------------------------------------------------------------
    
    // Traversing the set
    
    // 1.a - Traditional way (it is here pointer)
    for(sit = s1.begin(); sit != s1.end(); sit++){
        cout << *sit << " ";                                        // returns all s1 elements -> 1 2 3 4 5 6 7
    }
    cout << endl;
    
    // 1.b - It by default starts from first and goes till the last -> for each loop (it is here actual element)
    for(auto sit: s1){
        cout << sit << " ";                                         // returns all s1 selements -> 1 2 3 4 5 6 7 
    }
    cout << endl;
    
    // -------------------------------------------------------------------------------------------------------------------------------------------
    
    // Operations on Set
    
    // 2. Inserting into a set                                      -> using insert function : Insertion of an element in a set takes O(logn) time
    for(int i=0; i < 5; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    
    for(auto sit: s){
        cout << sit << " ";                                         // returns all s1 selements -> 1 2 3 4 5 6 7 
    }
    cout << endl;
    
    // 3. Deleting an element or a range of elements from a set     -> using erase function : Deletion of an element in a set takes O(logn) time 
    
    s.erase(s.begin());                                             //  Deletes the element at the mentioned position -> s.erase(index) {Single element} => s = {31, 34, 54, 65} 
    s.erase(31);                                                    //  Searches the element and deletes that element -> s.erase(element) {Single element} => s = {34, 54, 65}           
    
    for(auto sit: s){
        cout << sit << " ";                                         // returns all s selements -> 34 54 65
    }
    cout << endl;
    
    auto start = s1.begin();
    auto end = s1.begin();
    end ++;
    end ++;
    s1.erase(start, end);                                           //  Deletes the range of elements -> s.erase(start, end) { The range is of type [) } => s = {65}
    
    for(auto sit: s1){
        cout << sit << " ";
    }
    
    // 4. find                                                      -> returns the iterator position (index) of the mentioned element if present elese return index of end() => size + 1 index
    auto position1 = s2.find(2);                                    // returns 4
    auto position2 = s2.find(8);                                    // returns s1.end() => {8}
    cout << &position1 << " " << &position2 << " " << endl;         // Size of int is 4

    // 5. clear                                                     -> clears the entire size
    s.clear();

    // 6. count
    s.count(21)                                                     // returns the no of occurences of entered element
    
    // Other Operations
    cout << s1.size() << " " << endl;                               // Returns the size of the set
    cout << s1.max_size() << " " << endl;                           // Returns the maximum size of the set possible
    swap(s, s1);                                                    // Swaps two sets

    auto begin = s2.begin();
    auto finish = s2.end();
    s2.erase(begin, finish);                                        // Erasing the entire set -> Clearing the set
    
    s2.empty() ? cout << "Set 2 empty" << endl : cout << "Set 2 not empty" << endl;

    // ====================================================================================================================================================

    //                                                  4.B   :   U N O R D E R E D   S E T

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // UnOrdered Set is a container in STL that also stores only unique elements but the order is not fixed -> An element can be present at any position
    // The Advantage of using UnOrdered set is: All operations of UnOrdered set takes a time complexity of O(1) in average case
    // All Operations of ordered set are same for UnOrdered set

    unordered_set<int> us;

    // ====================================================================================================================================================

    //                                                  4.C   :   M U L T I S E T

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // Multiset is a container in STL that allows us to store duplicate elements but being an set of ordered type - It also arranges all the values in an increasing fashion
    // All Operations of multiset also takes a time complexity of O(logn) in all cases 

    multiset<int> ms;

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // Difference in Mulitset for erase 

    // This works same as that of ordered set
    s.erase(s.begin());                                             //  Deletes the element at the mentioned position -> s.erase(index) {Single element} => s = {31, 34, 54, 65} 

    // In this case, since multiset may contain duplicate values of given element -> Hence it deletes all occurences of that element
    s.erase(31);                                                    //  Searches the element and deletes that element -> s.erase(element) {Single element} => s = {34, 54, 65}           
    
    for(auto sit: s){
        cout << sit << " ";                                         // returns all s selements -> 34 54 65
    }
    cout << endl;
    
    // This again works same as that of ordered set
    auto start = s1.begin();
    auto end = s1.begin();
    end ++;
    end ++;
    s1.erase(start, end);                                           //  Deletes the range of elements -> s.erase(start, end) { The range is of type [) } => s = {65}
    
    for(auto sit: s1){
        cout << sit << " ";
    }

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // Difference in Find
    
    // For an element present in the multiset, it will return the iterator position for the first occurence ofo that element
    auto position1 = s2.find(2);                                    

    // For an element not present in the multiset, It works same as ordered set
    auto position2 = s2.find(8);                                    // returns s1.end() => {8}
    cout << &position1 << " " << &position2 << " " << endl;         // Size of int is 4

    /*
    ---------------------------------------------------------------------------------------------------------------------------------------------------
                                                    C O N T A I N E R - 5   :   M A P S
    ---------------------------------------------------------------------------------------------------------------------------------------------------
    */ 

    //                                                  5.A   :   O R D E R E D     M A P 

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // Ordered Maps or simply Maps is a container in STL that stores key value pairs just like a dictionary. It stores all unique keys and also arranges all the pairs in a lexographical manner on the basis of key
    // A Key value pair can be reassigned but its older key pair will be lost
    // All operations of Maps takes O(logn) time complexity in average cases (almost all)

    // Declaring and Initialising a map
    map<string, int> m  {
        {'Rohit', 1}, {'Prathmesh', 2}, {'Aniket', 3}, {'Sandesh', 4}, {'Prasad', 5}, {'Siddhesh', 6}
    };
    map<string, int>::iterator it;

    // Traversing a Map

    // Traditional Way (Iterator Approach)
    for(it = m.begin(); it != m.end(); it++){
        cout << it -> first << it -> second << " ";
    }

    // for each loop
    for(auto it: m){
        cout << it << " ";
    }
    
    // -------------------------------------------------------------------------------------------------------------------------------------------
    
    // Operations on Maps

    // 1. Inserting into a map                                  -> using emplace
    m.emplace("Max", 4);                    

    // 2. Deleting from a Map
    m.erase("Max");                                             // -> Deletes a single key value pair

    auto start = m.begin();
    auto end = m.begin();
    end++;
    end++
    m.erase(start, end);                                       // -> Deletes a slice of key, value pairs

    m.erase(m.begin(), m.end())                                // -> Deletes all key, value pairs

    // 3. Finding a key in map
    auto position = mp.find("Siddhesh");
    cout << position -> first << " " << position -> second << " ";

    // 4. Deleting the entire map making it empty
    m.clear();                                                  // -> Empties the map

    // Other operations
    m.empty() : cout << "True -> Map is empty" : cout << "Map is empty";

    // ====================================================================================================================================================

    //                                                  5.B   :   U N O R D E R E D   M A P

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // UnOrdered Map is a container in STL that also stores only unique keys but the order is not fixed -> A key can be present at any position
    // The Advantage of using UnOrdered map is: All operations of UnOrdered map takes a time complexity of O(1) in average case (almost all cases)
    // All Operations of ordered map are same for UnOrdered set
    // unordered map doesn't support pair container 

    unordered_set<int, int> um;

    // ====================================================================================================================================================

    //                                                  5.C   :   M U L T I M A P

    // -------------------------------------------------------------------------------------------------------------------------------------------

    // Multimap is a container in STL that allows us to store duplicate keys but being an map of ordered type - It also arranges all the keys in an lexograpghic fashion
    // All Operations of multimap also takes a time complexity of O(logn) in all cases 

    multimap<string, int> mm;

    // Difference in Multimaps
    mm.erase("Siddhesh");                                 // Deletes all the occurences of key value pair whose key is Siddhesh

    mm.find("Siddhesh");                                  // Returns the first occurence of key

    return 0;
}
#include <iostream>
// #include <map>
// #include <algorithm>
// #include <vector>
#include<bits/stdc++.h>

using namespace std;
int main() {
    // Initial map declaration
    std::map<int, std::string> map = {
        {1, "Banana"},
        {2, "Apple"},
        {3, "Cherry"},
        {4, "Date"}
    };
    /**
     Use lambda function to compare and use it to sort map by values;
    */

    // Using a vector to store map items for sorting by value length
    std::vector<std::pair<int, std::string>> vec(map.begin(), map.end());

    // Sorting the vector by the length of the string value in ascending order
    std::sort(vec.begin(), vec.end(), [](const std::pair<int, std::string>& a, const std::pair<int, std::string>& b) {
        return a.second.length() < b.second.length();
    });

    // Printing the sorted elements by value length
    std::for_each(vec.begin(), vec.end(), [](const std::pair<int, std::string>& pair) {
        std::cout << pair.first << ": " << pair.second << " (Length: " << pair.second.length() << ")" << std::endl;
    });

    return 0;
}

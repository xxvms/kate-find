#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {

    std::vector<int> v{2, 4, 6, 6, 1, 3, -2, 0, 11, 2, 3, 2, 4, 4, 2, 4};
    std::string s{"hello I am a sentence"};

    // find the first zero in the collection
    auto result = std::find(std::begin(v), std::end(v), 0);
    int we_looked_for = *result;

    // find the first 2 after that zero
    result = find(result, std::end(v), 2);
    if (result != std::end(v)){
        we_looked_for = *result;
    }

    // find the first a
    auto letter = std::find(std::begin(s), std::end(s), 'a');
    char a = *letter;

    //find first off value
    result = std::find_if(std::begin(v), std::end(v), [](auto elem){ return elem % 2 != 0; });


    //find the first even value
    result = std::find_if_not(std::begin(v), std::end(v), [](auto elem) { return elem % 2 != 0; });
    we_looked_for = *result;


    std::vector<int> primes { 1, 2, 3, 5, 7, 11, 13 };
    result = std::find_first_of(std::begin(v), std::end(v), std::begin(primes), std::end(primes));
    we_looked_for = *result;

    std::vector<int> sub_sequence {2, 4};
    result = std::search(std::begin(v), std::end(v), std::begin(sub_sequence), std::end(sub_sequence));
    we_looked_for = *result;
    result++;
    result++;
    int six = *result;

    return 0;
}
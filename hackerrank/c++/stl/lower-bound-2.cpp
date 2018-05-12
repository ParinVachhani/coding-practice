//Problem link - https://www.hackerrank.com/challenges/cpp-lower-bound
//This solution was taken from discussion board. It was added by https://www.hackerrank.com/elvis_dukaj

#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
    int size; cin >> size;

    vector<int> vec; vec.reserve(size);
    copy_n(istream_iterator<int>(cin), size, back_inserter(vec));

    int queryCount; cin >> queryCount; 

    vector<int> queries; queries.reserve(queryCount);
    copy_n(istream_iterator<int>(cin), queryCount, back_inserter(queries));
    
    for(auto& q : queries)
    {
        auto it = lower_bound(begin(vec), end(vec), q);        
        cout << (*it == q ? "Yes " : "No ") << distance(begin(vec), it) + 1 << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

	// Vector
	// A dynamic array is an array whose size can be changed during the execution of
	// the program. The most popular dynamic array in C++ is the vector structure,
	// which can be used almost like an ordinary array.
	// The internal implementation of a vector uses an ordinary array. If the size of
	// the vector increases and the array becomes too small, a new array is allocated
	// and all the elements are moved to the new array. However, this does not happen
	// often and the average time complexity of push_back is O(1).
	vector<int> v;
	v.push_back(3); // [3]
	v.push_back(2); // [3,2]
	v.push_back(5); // [3,2,5]
	cout << v[0] << "\n"; // 3
	cout << v[1] << "\n"; // 2
	cout << v[2] << "\n"; // 5
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
	for (auto x : v) {
		cout << x << "\n";
	}
	cout << v.back() << "\n"; // 2
	v.pop_back();
	cout << v.back() << "\n"; // 5
	vector<int> p = {2,4,2,5,1};
	// size 10, initial value 5
	vector<int> q(10, 5);

	// String
	// The string structure is also a dynamic array that can be used almost like a vector.
	string a = "hatti";
	string b = a+a;
	cout << b << "\n"; // hattihatti
	b[5] = ’v’;
	cout << b << "\n"; // hattivatti
	string c = b.substr(3,4);
	cout << c << "\n"; // tiva

	// Set
	// A set is a data structure that maintains a collection of elements.
	// The structure set is based on a balanced binary tree and its operations
	// work in O(log n) time. The structure unordered_set uses hashing,
	// and its operations work in O(1) time on average.
	// The benefit of the set structure is that it maintains the order 
	// of the elements and provides functions that are not available in
	// unordered_set. On the other hand, unordered_set can be more efficient.
	set<int> s;
	s.insert(3);
	s.insert(2);
	s.insert(5);
	cout << s.count(3) << "\n"; // 1
	cout << s.count(4) << "\n"; // 0
	s.erase(3);
	s.insert(4);
	cout << s.count(3) << "\n"; // 0
	cout << s.count(4) << "\n"; // 1
	cout << s.size() << "\n"; // 4
	for (auto x : s) {
		cout << x << "\n";
	}
	s.insert(5);
	s.insert(5);
	cout << s.count(5) << "\n"; // 1

	// Multiset
	multiset<int> ms;
	ms.insert(5);
	ms.insert(5);
	ms.insert(5);
	cout << ms.count(5) << "\n"; // 3
	ms.erase(5);
	cout << ms.count(5) << "\n"; // 0
	ms.erase(ms.find(5));
	cout << ms.count(5) << "\n"; // 2

	// Map
	// A map is a generalized array that consists of key-value-pairs. While the keys in
	// an ordinary array are always the consecutive integers 0, 1, . . . , n − 1, where n is
	// the size of the array, the keys in a map can be of any data type and they do not
	// have to be consecutive values.
	// The structure map is based on a balanced binary tree
	// and accessing elements takes O(log n) time, while the structure unordered_map
	// uses hashing and accessing elements takes O(1) time on average.
	map<string,int> mp;
	mp["monkey"] = 4;
	mp["banana"] = 3;
	mp["harpsichord"] = 9;
	cout << mp["banana"] << "\n"; // 3
	// If the value of a key is requested but the map does not contain it, the key
	// is automatically added to the map with a default value.
	cout << mp["aybabtu"] << "\n"; // 0
	if (mp.count("aybabtu")) {
	// key exists
	}
	for (auto x : mp) {
		cout << x.first << " " << x.second << "\n";
	}

	// Iterators and ranges
	// An iterator is a variable that points to an element in a data structure.
	// The iterator begin points to the first element in the data structure,
	// and the iterator end points to the position after the last element.
	// Thus, the range defined by the iterators is half-open.
	/* In-built functions which use iterators like v.begin() and v.end()
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	random_shuffle(v.begin(), v.end());
	*/
	/* Can also be used for an array with its pointer
	sort(a, a+n);
	reverse(a, a+n);
	random_shuffle(a, a+n); 
	*/

	// Set iterators
	set<int>::iterator it = s.begin(); // points to the smallest element in a set
	// auto it = s.begin(); // shorter way to write the same as above
	cout << *it << "\n"; // access the element to which it points
	for (it = s.begin(); it != s.end(); it++) {
		cout << *it << "\n";
	}
	it = s.end(); it--;
	cout << *it << "\n";
	it = s.find(x);
	if (it == s.end()) {
		// x is not found
	}
	/* Find element nearest to x using lower_bound
	auto it = s.lower_bound(x);
	if (it == s.begin()) {
		cout << *it << "\n";
	} else if (it == s.end()) {
		it--;
		cout << *it << "\n";
	} else {
		int a = *it; it--;
		int b = *it;
		if (x-b < a-x) cout << b << "\n";
		else cout << a << "\n";
	}
	*/

	// Bitset
	// A bitset is an array whose each value is either 0 or 1
	bitset<10> bs;
	bs[1] = 1;
	bs[3] = 1;
	bs[4] = 1;
	bs[7] = 1;
	cout << bs[4] << "\n"; // 1
	cout << bs[5] << "\n"; // deafult value 0
	bitset<10> bs1(string("0010011010")); // from right to left
	cout << bs1[4] << "\n"; // 1
	cout << bs1[5] << "\n"; // 0
	cout << bs1.count() << "\n"; // 4
	bitset<10> bs2(string("0010110110"));
	bitset<10> bs3(string("1011011000"));
	cout << (bs2&bs3) << "\n"; // 0010010000
	cout << (bs2|bs3) << "\n"; // 1011111110
	cout << (bs2^bs3) << "\n"; // 1001101110

	// Deque
	// A deque is a dynamic array whose size can be efficiently changed at both ends of
	// the array. Like a vector, a deque provides the functions push_back and pop_back ,
	// but it also includes the functions push_front and pop_front which are not avail-
	// able in a vector.
	// The internal implementation of a deque is more complex than that of a vector,
	// and for this reason, a deque is slower than a vector. Still, both adding and
	// removing elements take O(1) time on average at both ends.
	deque<int> dq;
	dq.push_back(5); // [5]
	dq.push_back(2); // [5,2]
	dq.push_front(3); // [3,5,2]
	dq.pop_back(); // [3,5]
	dq.pop_front(); // [5]

	// Stack
	// A stack is a data structure that provides two O(1) time operations: adding an
	// element to the top, and removing an element from the top. It is only possible to
	// access the top element of a stack.
	stack<int> sk;
	sk.push(3);
	sk.push(2);
	sk.push(5);
	cout << sk.top(); // 5
	sk.pop();
	cout << sk.top(); // 2

	// Queue
	// A queue also provides two O(1) time operations: adding an element to the end
	// of the queue, and removing the first element in the queue. It is only possible to
	// access the first and last element of a queue.
	queue<int> qu;
	qu.push(3);
	qu.push(2);
	qu.push(5);
	cout << qu.front(); // 3
	qu.pop();
	cout << qu.front(); // 2

	// Priority queue
	// A priority queue maintains a set of elements. The supported operations are
	// insertion and, depending on the type of the queue, retrieval and removal of either
	// the minimum or maximum element. Insertion and removal take O(log n) time,
	// and retrieval takes O(1) time.
	// While an ordered set efficiently supports all the operations of a priority queue,
	// the benefit of using a priority queue is that it has smaller constant factors. A
	// priority queue is usually implemented using a heap structure that is much
	// simpler than a balanced binary tree used in an ordered set.
	// By default, the elements in a C++ priority queue are sorted in decreasing
	// order, and it is possible to find and remove the largest element in the queue.
	priority_queue<int> pq;
	pq.push(3);
	pq.push(5);
	pq.push(7);
	pq.push(2);
	cout << pq.top() << "\n"; // 7
	pq.pop();
	cout << pq.top() << "\n"; // 5
	pq.pop();
	pq.push(6);
	cout << pq.top() << "\n"; // 6
	pq.pop();
	// If we want to create a priority queue that supports finding and removing the
	// smallest element, we can do it as follows:
	priority_queue<int,vector<int>,greater<int>> pq1;

	// Policy-based data structures
	// The g++ compiler also supports some data structures that are not part of the C++
	// standard library. Such structures are called policy-based data structures. To use
	// these structures, the following lines must be added to the code:
	// #include <ext/pb_ds/assoc_container.hpp>
	// using namespace __gnu_pbds;
	// After this, we can define a data structure indexed_set that is like set but can be
	// indexed like an array. The definition for int values is as follows:
	typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
	// Now we can create a set as follows:
	indexed_set ids;
	ids.insert(2);
	ids.insert(3);
	ids.insert(7);
	ids.insert(9);
	// The speciality of this set is that we have access to the indices that the elements
	// would have in a sorted array. The function find_by_order returns an iterator to
	// the element at a given position:
	auto k = ids.find_by_order(2);
	cout << *k << "\n"; // 7
	// And the function order_of_key returns the position of a given element:
	cout << ids.order_of_key(7) << "\n"; // 2
	// If the element does not appear in the set, we get the position that the element
	// would have in the set:
	cout << ids.order_of_key(6) << "\n"; // 2
	cout << ids.order_of_key(8) << "\n"; // 3
	// Both the functions work in logarithmic time.

	return 0;
}
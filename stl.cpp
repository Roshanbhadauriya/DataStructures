#include <bits/stdc++.h>
#include <deque>
#include <stack>
#include <utility>
#include <vector>
using namespace std;

void explainPair() {
  pair<int, int> p = {1, 2};
  cout << p.first << p.second;

  pair<int, pair<int, int>> pr = {1, {12, 13}};

  cout << pr.second.second;

  pair<int, int> arr[] = {{1, 2}, {1, 3}, {2, 4}};
}

void explainVector() {
  vector<int> v;  // create an emppty container
  v.push_back(1); // push the value in the container if the container is full it
                  // will increase the size by double and then push the values
  v.emplace_back(2); // it is faster then push_back and little different

  vector<int> vec(5); // it will create the container of size 5

  // to create a vector with data and size of your need
  vector<int> vect(5, 100);

  // iterators in vector
  vector<int>::iterator it =
      v.begin(); // vector<int> in the start is for the type of container which
                 // you want to iterate over and v.begin( ) will points to the
                 // Memory where the vector container is

  it++;
  cout << *(it); // it is giving the memory address to print the value we use *

  // multiple types of iterators in vector

  vector<int>::iterator itt =
      v.end(); // end points to last element+1 location of the element means
               // plus one of the last element place
  vector<int>::reverse_iterator ittt = v.rend();
  vector<int>::reverse_iterator i = v.rbegin();

  // instead of writing vector<int>::iterator it we can replace it with auto
  // keyword
  for (auto it = v.begin(); it != v.end(); it++) {
    cout << *(it) << " ";
  }

  // for each loop using auto
  for (auto it : v) {
    cout << it;
  }

  // delete in vector
  v.erase(v.begin() + 1);
  v.erase(v.begin(), v.begin() + 4);
  vector<int> v2;
  // insert in the vector
  v.insert(v.begin(), 300);
  v.insert(v.begin() + 1, 2, 10); // this will insert two times means second
                                  // paramenter is the occurance
  cout << v.size();               // give how many elements in the vector
  v.pop_back();                   // remove the last element from back
  v.swap(v2);                     // swap vector with v2 vector
  v.clear();                      // remove everything from the vector
  cout << v.empty();              // is vector is empty it checks
}

void explainList() {
  // list is cheaper compare to vector in time complexity cause it is double
  // linklist and vector is single
  list<int> ls;
  ls.push_back(2);
  ls.emplace_back(4);
  ls.push_front(5);
  ls.emplace_front(3);

  // and the rest are same clear swap , end and other
}

void explainDequee() {
  deque<int> de;
  // same as vector
}

void explainStack() {
  stack<int> st;
  st.push(2);
  st.push(3);
  cout << st.top();
  st.pop();
}

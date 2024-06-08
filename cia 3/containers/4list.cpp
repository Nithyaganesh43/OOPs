#include <iostream>
#include <list>
using namespace std;

int main() {
    // List of integers create panna
    list<int> myList;

    // push_back(g) - 'g' va list ku kadhisila add pannum
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    // Output: 10 20 30

    // push_front(g) - 'g' va list ku munnaila add pannum
    myList.push_front(5);
    // Output: 5 10 20 30

    // front() - list la irundha first element oda value return pannum
    cout << "First element (front): " << myList.front() << endl;
    // Output: First element (front): 5

    // back() - list la irundha last element oda value return pannum
    cout << "Last element (back): " << myList.back() << endl;
    // Output: Last element (back): 30

    // pop_front() - list la irundha first element remove pannum
    myList.pop_front();
    cout << "After pop_front, first element: " << myList.front() << endl;
    // Output: After pop_front, first element: 10

    // pop_back() - list la irundha last element remove pannum
    myList.pop_back();
    cout << "After pop_back, last element: " << myList.back() << endl;
    // Output: After pop_back, last element: 20

    // begin() - list oda first element ku point panra iterator return pannum
    auto itBegin = myList.begin();
    cout << "First element (begin): " << *itBegin << endl;
    // Output: First element (begin): 10

    // end() - list oda theoretical last element ku point panra iterator return pannum
    auto itEnd = myList.end();
    itEnd--;
    cout << "Last element (end): " << *itEnd << endl;
    // Output: Last element (end): 20

    // rbegin() - list oda last element ku point panra reverse iterator return pannum
    auto itRBegin = myList.rbegin();
    cout << "First element in reverse (rbegin): " << *itRBegin << endl;
    // Output: First element in reverse (rbegin): 20

    // rend() - list oda theoretical first element ku munadi point panra reverse iterator return pannum
    auto itREnd = myList.rend();
    itREnd--;
    cout << "Last element in reverse (rend): " << *itREnd << endl;
    // Output: Last element in reverse (rend): 10

    // cbegin() - list oda constant iterator, first element ku point pannum
    auto itCBegin = myList.cbegin();
    cout << "First element (cbegin): " << *itCBegin << endl;
    // Output: First element (cbegin): 10

    // cend() - list oda constant iterator, theoretical last element ku point pannum
    auto itCEnd = myList.cend();
    itCEnd--;
    cout << "Last element (cend): " << *itCEnd << endl;
    // Output: Last element (cend): 20

    // crbegin() - list oda constant reverse iterator, last element ku point pannum
    auto itCRBegin = myList.crbegin();
    cout << "First element in reverse (crbegin): " << *itCRBegin << endl;
    // Output: First element in reverse (crbegin): 20

    // crend() - list oda constant reverse iterator, theoretical first element ku munadi point pannum
    auto itCREnd = myList.crend();
    itCREnd--;
    cout << "Last element in reverse (crend): " << *itCREnd << endl;
    // Output: Last element in reverse (crend): 10

    // empty() - list empty aa illa nu check pannum, empty na 1 return pannum, illa na 0 return pannum
    cout << "Is list empty? " << myList.empty() << endl;
    // Output: Is list empty? 0

    // insert() - list la specific position ku pudhu element add pannum
    itBegin++;
    myList.insert(itBegin, 15);
    cout << "Element after insertion: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Element after insertion: 10 15 20

    // erase() - list la irundha specific element remove pannum
    myList.erase(itBegin);
    cout << "Element after erase: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Element after erase: 10 20

    // assign() - list ku pudhu elements assign pannum, existing elements replace pannum
    myList.assign(5, 100);
    cout << "Elements after assign: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after assign: 100 100 100 100 100

    // remove() - list la irundha specific value remove pannum
    myList.remove(100);
    cout << "Elements after remove: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after remove: (nothing, since all 100s were removed)

    // remove_if() - condition true a irundha elements remove pannum
    myList.assign({1, 2, 3, 4, 5, 6});
    myList.remove_if([](int x) { return x % 2 == 0; });
    cout << "Elements after remove_if (remove even numbers): ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after remove_if (remove even numbers): 1 3 5

    // reverse() - list oda order reverse pannum
    myList.reverse();
    cout << "Elements after reverse: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after reverse: 5 3 1

    // size() - list oda element count return pannum
    cout << "Size of list: " << myList.size() << endl;
    // Output: Size of list: 3

    // resize() - list ku pudhu size set pannum
    myList.resize(3);
    cout << "Elements after resize: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after resize: 5 3 1

    // sort() - list la irundha elements sort pannum
    myList.assign({3, 1, 4, 2, 5});
    myList.sort();
    cout << "Elements after sort: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after sort: 1 2 3 4 5

    // max_size() - list la max elements iruka mudiyum nu return pannum
    cout << "Max size of list: " << myList.max_size() << endl;
    // Output: Max size of list: (depends on the system, typically very large)

    // unique() - consecutive duplicates remove pannum
    myList.assign({1, 1, 2, 2, 3, 3});
    myList.unique();
    cout << "Elements after unique: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after unique: 1 2 3

    // emplace_front() - list ku munnaila pudhu element construct pannum
    myList.emplace_front(0);
    cout << "Elements after emplace_front: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after emplace_front: 0 1 2 3

    // emplace_back() - list ku kadhisila pudhu element construct pannum
    myList.emplace_back(4);
    cout << "Elements after emplace_back: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after emplace_back: 0 1 2 3 4

    // clear() - list la irundha elements ellame remove pannum
    myList.clear();
    cout << "Elements after clear: " << myList.size() << endl;
    // Output: Elements after clear: 0

    // operator= - list ku pudhu contents assign pannum
    list<int> anotherList = {10, 20, 30};
    myList = anotherList;
    cout << "Elements after operator=: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after operator=: 10 20 30

    // swap() - rend list oda contents swap pannum
    list<int> newList = {40, 50, 60};
    myList.swap(newList);
    cout << "Elements after swap: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after swap: 40 50 60

    // splice() - oru list oda elements vere oru list ku transfer pannum
    myList.splice(myList.begin(), newList);
    cout << "Elements after splice: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after splice: 40 50 60

    // merge() - rend sorted lists merge pannum
    list<int> list1 = {1, 3, 5};
    list<int> list2 = {2, 4, 6};
    list1.merge(list2);
    cout << "Elements after merge: ";
    for(auto val : list1) cout << val << " ";
    cout << endl;
    // Output: Elements after merge: 1 2 3 4 5 6

    // emplace() - list ku specific position la pudhu element construct pannum
    itBegin = myList.begin();
    advance(itBegin, 2);
    myList.emplace(itBegin, 25);
    cout << "Elements after emplace: ";
    for(auto val : myList) cout << val << " ";
    cout << endl;
    // Output: Elements after emplace: 40 50 25 60

    return 0;
}

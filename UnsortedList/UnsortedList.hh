#ifndef UNSORTEDLIST
#define UNSORTEDLIST

#include <initializer_list>

class UnsortedList {
public:
	UnsortedList(int sz);
	UnsortedList(std::initializer_list<int> ls);
	~UnsortedList();

	// puts an integer element into the list
	void putElement(int element);

	// gets an integer element from the list
	int getElement(int pos) const;

	// returns the status of the UnsortedList being full
	bool isFull() const;

	// deletes an element from the list by swapping the
	// element at size with the undesired element
	void delElement();

	void resize(int sz); // resizes the underlying array to a new size
private:
	int* arr;     // the pointer to the first position of the array
	int cur_size; // the current size of the list
	int max_size; // the max size of the list
};

#endif
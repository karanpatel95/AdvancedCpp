#ifndef RING_H_
#define RING_H_

#include <iostream>

template <class T>
class ring {
  public:
    class iterator;
};

template <class T>
class ring<T>::iterator {
public:
    iterator() {
        std::cout << "this is iterator" << std::endl;
    }
};

#endif

#ifndef RING_H_
#define RING_H_

#include <iostream>

template <class T>
class ring {

private:
    int pos_;
    int size_;
    T *array_ptr_;

public:
    class iterator;

public:

    ring(int size) : pos_(0), size_(size), array_ptr_(NULL){
        array_ptr_ = new T[size_];
    }

    int size() {
        return size_;
    }

    void add(T value) {
        array_ptr_[pos_++] = value;
        if(pos_ == size_) {
            pos_ = 0;
        }
    }

    T &get(int index) {
        return array_ptr_[index];
    }

    iterator begin() {
        return iterator(0, *this);
    }

    iterator end() {
        return iterator(size_, *this);
    }

    ~ring() {
        delete[] array_ptr_;
    }
};

template <class T>
class ring<T>::iterator {

private:
    int pose_;
    ring &aRing_;

public:
    iterator(int pos, ring& aRing) : pose_(pos), aRing_(aRing) {
    }

    iterator &operator ++(int) {
        pose_++;
        return *this;
    }

    iterator &operator ++() {
        pose_++;
        return *this;
    }

    bool operator !=(const iterator &other) const {
        return pose_ != other.pose_;
    }

    T &operator *() {
        return aRing_.get(pose_);
    }
};

#endif

// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
  private:
    T arr[100];
    int first, int last;
  public:
    TPQueue() : first(0), last(0) {}
    void push(T x) {
      if (last - first >= 100) {
        throw std::string ("Full!");
      { else {
          while (( 
    }
    T front() {
        return arr[first % size];
    }
    T back() {
        return arr[(last - 1) % size];
    }
    T pop() {
        return arr[(first++) % size];
    }
};


struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_

// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_
#include <string>

template<typename T, int size>
class TPQueue {
 private:
    T arr[100];
    int first, last;
 public:
    TPQueue() : first(0), last(0) {}
    void push(T x) {
      if (last - first >= size) {
        throw std::string("Full!");
      } else {
          int vrem = --last + 1;
          while (((vrem + 1) >= first) && (arr[(vrem + 1) % size].prior < x.prior)) {
              arr[vrem % size] = arr[vrem % size];
              --vrem;
          }
          arr[vrem % size] = x;
      }
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

#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <iostream>
using namespace std;

class boolean {
    private:
        char* array;
        int size;

    public:
        boolean(int size1):array(nullptr),size((size1/8)+1){
          array = new char[size];
          for(int i = 0; i < size; i++){
            array[i] = 0x00;
          }
          // TODO
        }

        void bitOn(int position) {
          char mask = 0x01;
          mask = mask << position % 8;
          array[position/8] = array[position/8] | mask;
            // TODO
        }

        void bitOff(int position) {
          char mask = 0x01;
          mask = mask << position % 8;
          mask = ~mask;
          array[position/8] = array[position/8] & mask;
            // TODO
        }

        bool operator[](int position) {
          char mask = 0x01;
          mask = mask << position%8;
          array[position/8] = array[position/8] & mask;
          if(array[position/8] == 0){
            return false;
          }
          else{
            return true;
          }
            // TODO
        }

        void clear() {
          for(int i = 0; i < size; i++){
            array[i] = 0x00;
          }
            // TODO
        }

        ~boolean() {
          delete array;
            // TODO
        }
};

#endif

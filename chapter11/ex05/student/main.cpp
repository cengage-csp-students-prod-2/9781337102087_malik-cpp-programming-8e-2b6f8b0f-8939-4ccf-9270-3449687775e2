// main.cpp
#include <iostream>
#include "addressBookType.h"
#include <fstream>

using namespace std;

int main() {
   addressBookType addressBook;
   ifstream infile;
  
   addressBook.loadData(infile);  // Load data from file
   addressBook.printAll();        // Print all contacts
  
   return 0;
}
#include "iostream"
#include "Tree.h"



int main() {
  TTree sTree;
  sTree.SetHeight(rand());
  if (sTree.GetHeight() > 200) 
    sTree.SetLeavs(0);
  else  
    sTree.SetLeavs(1);

  std :: cout << "Height: " << sTree.GetHeight();
  std :: cout << "\nLeaves: " << sTree.GetLeavs();





}
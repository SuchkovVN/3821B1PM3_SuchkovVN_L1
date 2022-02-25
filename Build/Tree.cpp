#include "Tree.h"


  float TTree :: GetHeight() {
    return height;
  }

  void TTree :: SetHeight(const float h) {
    if ((h > 0) && (h < 1000)) {
      height = h;
    }

  }

  bool TTree :: GetLeavs() {
    return leav;

  }
  void TTree :: SetLeavs(bool l) {
    leav = l;
  }
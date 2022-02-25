#pragma once 

class TTree {

public:
  float GetHeight();
  void SetHeight(const float height);
  bool GetLeavs();
  void SetLeavs(bool leav);
  

protected:
  float height;
  bool leav; 





};
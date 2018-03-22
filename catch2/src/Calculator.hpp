#ifndef __CALCULATOR__
#define __CALCULATOR__

#include <cstdint>
#include <stdexcept>

class Calculator
{
public:
  std::int32_t Add(std::int32_t first, std::int32_t second) const
  {
    return first + second;
  }
  
  std::int32_t Substract(std::int32_t first, std::int32_t second) const
  {
    return first - second;
  }
  
  std::int32_t Multiply(std::int32_t first, std::int32_t second) const
  {
    return first * second;
  }
  
  std::int32_t Divide(std::int32_t first, std::int32_t second) const
  {
    if(0 == second) {
      throw std::invalid_argument( "received 0 in divisor" );
    }
    return first / second;
  }

protected:
private:  
};

#endif

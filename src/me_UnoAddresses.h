// Get some practical memory addresses for Arduino Uno

/*
  Author: Martin Eden
  Last mod.: 2024-09-12
*/

#pragma once

#include <me_MemoryPoint.h>
#include <me_BaseTypes.h>

namespace me_UnoAddresses
{
  using namespace me_MemoryPoint;

  // Get memory bit address for pin
  TBool GetPinAddress_Bits(
    TMemoryPoint_Bits * PinAddress,
    TUint_1 Pin
  );
}

/*
  2024-03
  2024-05
*/

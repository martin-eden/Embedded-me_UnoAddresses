// Get some practical memory addresses for Arduino Uno

/*
  Author: Martin Eden
  Last mod.: 2024-05-17
*/

#pragma once

#include <me_MemoryPoint.h>
#include <me_BaseTypes.h>

namespace me_UnoAddresses
{
  using namespace me_MemoryPoint;
  using namespace me_BaseTypes;

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

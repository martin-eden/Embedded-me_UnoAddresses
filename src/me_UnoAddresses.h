// Get some practical memory addresses for Arduino Uno

/*
  Author: Martin Eden
  Last mod.: 2024-10-23
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_UnoAddresses
{
  // Get memory bit address for pin
  TBool GetPinAddress(
    TUint_2 * PinByteAddr,
    TUint_1 * PinBitOffs,
    TUint_1 Pin
  );
}

/*
  2024-03
  2024-05
  2024-10-23 Redesign without using [me_MemoryPoint]
*/

// Get some practical memory addresses for Arduino Uno

/*
  Author: Martin Eden
  Last mod.: 2024-12-12
*/

#pragma once

#include <me_BaseTypes.h>

namespace me_UnoAddresses
{
  // Get memory bit address for pin
  TBool GetPinAddress(
    TAddress * PinAddr,
    TUint_1 * PinBit,
    TUint_1 Pin
  );

  const TUint_2 RamSize = 2 * 1024;
  const TAddress RamMaxAddr = 256 + 2 * 1024 - 1;

  const TUint_2 FlashSize = 32 * 1024L;
  const TAddress MaxFlashAddr = FlashSize - 1;
}

/*
  2024-03
  2024-05
  2024-10-23 Redesign without using [me_MemoryPoint]
  2024-12-12
*/

// Some useful memory address for Arduino Uno

/*
  Author: Martin Eden
  Last mod.: 2024-10-23
*/

#include "me_UnoAddresses.h"

#include <me_BaseTypes.h>

using namespace me_UnoAddresses;

/*
  Get pin address and bit
*/
TBool me_UnoAddresses::GetPinAddress(
  TUint_2 * PinByteAddr,
  TUint_1 * PinBitOffs,
  TUint_1 Pin
)
{
  /*
    Arduino Uno board has 14 "digital" pins (0..13) and
    6 "analog" pins A0 .. A5 (14..19).

    This nomenclature is a bit cursed as "analog" pins can
    do digital input/output and A4..A5 are used for I2C.

    Difference is that "analog" pins can digitize analog signal
    to 10 bits while "digital" pins digitize to one bit.
  */

  if (Pin > 19)
    return false;

  enum PortAddresses:TUint_2
  {
    B = 0x25,
    C = 0x28,
    D = 0x2B,
  };

  TUint_2 Addr;
  TUint_1 Bit;

  if (Pin <= 7)
  {
    Addr = PortAddresses::D;
    Bit = Pin;
  }
  else if ((Pin >= 8) && (Pin <= 13))
  {
    Addr = PortAddresses::B;
    Bit = Pin - 8;
  }
  else if ((Pin >= 14) && (Pin <= 19))
  {
    Addr = PortAddresses::C;
    Bit = Pin - 14;
  }

  *PinByteAddr = Addr;
  *PinBitOffs = Bit;

  return true;
}

/*
  2024-03-23 PinToIoRegisterAndBit()
  2024-05-05 [/] to PinToAddressAndBit()
  2024-05-14 [/] GetPinBitAddress()
  2024-05-18 [/] GetPinAddress_Bits() lol
  2024-10-23
*/

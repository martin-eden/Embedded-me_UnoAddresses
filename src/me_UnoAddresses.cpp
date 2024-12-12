// Some useful memory address for Arduino Uno

/*
  Author: Martin Eden
  Last mod.: 2024-12-12
*/

#include <me_UnoAddresses.h>

#include <me_BaseTypes.h>

using namespace me_UnoAddresses;

/*
  Get pin address and bit

  Fails at wrong ping number.
  On fail returns false.
*/
TBool me_UnoAddresses::GetPinAddress(
  TAddress * PinAddr,
  TUint_1 * PinBit,
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

  enum PortAddresses:TAddress
  {
    PortB = 37,
    PortC = 40,
    PortD = 43,
  };

  if (Pin <= 7)
  {
    *PinAddr = PortAddresses::PortD;
    *PinBit = Pin;
  }
  else if ((Pin >= 8) && (Pin <= 13))
  {
    *PinAddr = PortAddresses::PortB;
    *PinBit = Pin - 8;
  }
  else if ((Pin >= 14) && (Pin <= 19))
  {
    *PinAddr = PortAddresses::PortC;
    *PinBit = Pin - 14;
  }

  return true;
}

/*
  2024-03-23 PinToIoRegisterAndBit()
  2024-05-05 [/] to PinToAddressAndBit()
  2024-05-14 [/] GetPinBitAddress()
  2024-05-18 [/] GetPinAddress_Bits() lol
  2024-10-23
  2024-12-12
*/

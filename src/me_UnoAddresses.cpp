// Some useful memory address for Arduino Uno

/*
  Author: Martin Eden
  Last mod.: 2025-08-15
*/

#include <me_UnoAddresses.h>

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
    Pins are grouped in bit "ports". Pin requires three bits to
    configure and control it. So three different ports per 8 pins.

    Ports can be named Mode Read Write. Memory sequence for them
    is Read Mode Write.

    We're returning address of Write port. To get address of Read port
    shift address by two bytes.
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

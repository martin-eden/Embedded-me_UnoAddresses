// [me_UnoAddresses] simple demo

/*
  Author: Martin Eden
  Last mod.: 2024-12-12
*/

#include <me_UnoAddresses.h>

#include <me_BaseTypes.h>
#include <me_Uart.h>
#include <me_Console.h>

void RunTest()
{
  using
    me_UnoAddresses::GetPinAddress;

  TUint_1 Pin;
  TAddress PinAddress;
  TUint_1 PinBitOffset;
  TBool IsOkay;

  Pin = A1;

  IsOkay = GetPinAddress(&PinAddress, &PinBitOffset, Pin);

  if (!IsOkay)
  {
    Console.Write("Failed to get address for pin (");
    Console.Print(Pin);
    Console.Write(")");
    Console.EndLine();
    return;
  }

  Console.Write("Pin ( Number");
  Console.Print(Pin);
  Console.Write(") Address (");
  Console.Print(PinAddress);
  Console.Write(") Bit (");
  Console.Print(PinBitOffset);
  Console.Write(")");
  Console.EndLine();
}

//

void setup()
{
  me_Uart::Init(me_Uart::Speed_115k_Bps);

  Console.Print("[me_UnoAddresses] Hello there!");
  RunTest();
  Console.Print("[me_UnoAddresses] Done.");
}

void loop()
{
}

/*
  2024-05-20
  2024-10-23
*/

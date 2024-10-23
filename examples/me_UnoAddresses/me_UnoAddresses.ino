// [me_UnoAddresses] simple demo

/*
  Author: Martin Eden
  Last mod.: 2024-10-23
*/

#include <me_UnoAddresses.h>

#include <me_BaseTypes.h>
#include <me_UartSpeeds.h>
#include <me_Console.h>

void setup()
{
  Serial.begin(me_UartSpeeds::Arduino_Normal_Bps);

  Console.Print("[me_UnoAddresses] Hello there!");

  TUint_1 Pin;
  TUint_2 PinAddress;
  TUint_1 PinBitOffset;
  TBool GotAddr;

  Pin = A1;

  GotAddr =
    me_UnoAddresses::GetPinAddress(
      &PinAddress,
      &PinBitOffset,
      Pin
    );

  if (!GotAddr)
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

  Console.Print("[me_UnoAddresses] Done.");
}

void loop()
{
}

/*
  2024-05-20
  2024-10-23
*/

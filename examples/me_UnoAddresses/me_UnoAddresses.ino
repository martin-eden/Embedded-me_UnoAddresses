// [me_UnoAddresses] simple demo

/*
  Author: Martin Eden
  Last mod.: 2024-09-12
*/

#include <me_UnoAddresses.h>

#include <me_UartSpeeds.h>
#include <me_InstallStandardStreams.h>
#include <me_BaseTypes.h>

using namespace me_UnoAddresses;

void setup()
{
  Serial.begin(me_UartSpeeds::Arduino_Normal_Bps);
  InstallStandardStreams();
  delay(500);

  printf("[me_UnoAddresses] Hello there!\n");

  TUint_1 Pin;
  TMemoryPoint_Bits BitAddr;
  TBool GotAddr;

  Pin = A1;
  GotAddr = GetPinAddress_Bits(&BitAddr, Pin);
  if (!GotAddr)
  {
    printf("Failed to get address for pin %u.\n", Pin);
    return;
  }

  printf(
    "Pin %u. Address 0x%02X, bit %u.\n",
    Pin,
    BitAddr.Base.Addr,
    BitAddr.BitOffs
  );

  printf("[me_UnoAddresses] Done.\n");
}

void loop()
{
}

/*
  2024-05-20
*/

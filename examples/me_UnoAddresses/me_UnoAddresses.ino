// [me_UnoAddresses] simple demo

/*
  Author: Martin Eden
  Last mod.: 2024-05-20
*/

#include <me_UnoAddresses.h>

#include <me_UartSpeeds.h>
#include <me_InstallStandardStreams.h>
#include <me_BaseTypes.h>

using namespace me_UnoAddresses;
using namespace me_BaseTypes;

void setup()
{
  Serial.begin(me_UartSpeeds::Arduino_Normal_Bps);
  InstallStandardStreams();
  delay(500);

  printf("[me_UnoAddresses]\n");

  TUint_1 Pin;
  TMemoryPoint_Bits BitAddr;
  TBool GotAddr;

  Pin = A1;
  GotAddr = GetPinAddress_Bits(&BitAddr, Pin);
  if (!GotAddr)
  {
    printf("Failed to get address for pin %u.", Pin);
    return;
  }

  printf(
    "Pin %u. Address 0x%02X, bit %u.\n",
    Pin,
    BitAddr.Base.Addr,
    BitAddr.BitOffs
  );
}

void loop()
{
}

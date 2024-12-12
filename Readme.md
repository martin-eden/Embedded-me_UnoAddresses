# What

(2024-05, 2024-12)

Arduino library to get some useful memory addresses for ATmega328/P.

What was needed so far is getting port and bit offset for pin.
Also provides constants for SRAM size, max SRAM address and Flash
memory size.

(This module should be changed.)

## Reference output

```
[me_UnoAddresses] Hello there!
Pin ( Number 015 ) Address ( 00040 ) Bit ( 001 )
[me_UnoAddresses] Done.
```

## Requirements

  * arduino-cli
  * bash

## Install/remove

Initially I was writing shell scripts to install all dependent libraries
to run demo examples. (And only them!) But it's hard to maintain.

Today's approach is to clone [repo to get all my libraries][GetLibs].
Run shell scripts. They will download and install all my embedded stuff,
including this.

## Code

* [Example][Example]
* [Interface][Interface]
* [Implementation][Implementation]

## See also

* [My other embedded C++ libraries][Embedded]
* [My other repositories][Repos]

[Example]: examples/me_UnoAddresses/me_UnoAddresses.ino
[Interface]: src/me_UnoAddresses.h
[Implementation]: src/me_UnoAddresses.cpp

[GetLibs]: https://github.com/martin-eden/Embedded-Framework-GetLibs
[Embedded]: https://github.com/martin-eden/Embedded_Crafts
[Repos]: https://github.com/martin-eden/contents

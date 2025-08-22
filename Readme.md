## What

(2024-05, 2024-12)

Function to get bit address by given pin number. ATmega328


## Archived

(2025)

This module is considered obsolete.

It did it's job. It provides core information and isolated.

It was created for [me_Ws2812b][me_Ws2812b]. Today we have [me_Pins][me_Pins]
and it should get this information by itself.


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

Clone [GetLibs][GetLibs] get all my active libraries. Run shell scripts
there to install/uninstall them.

Obsolete repositories will eventually become unused. So clone this
repo manually to be sure.


## Code

* [Interface][Interface]
* [Example][Example]
* [Implementation][Implementation]


## See also

* [My other embedded C++ libraries][Embedded]
* [My other repositories][Repos]


[Example]: examples/me_UnoAddresses/me_UnoAddresses.ino
[Interface]: src/me_UnoAddresses.h
[Implementation]: src/me_UnoAddresses.cpp

[me_Ws2812b]: https://github.com/martin-eden/Embedded-me_Ws2812b
[me_Pins]: https://github.com/martin-eden/Embedded-me_Pins

[GetLibs]: https://github.com/martin-eden/Embedded-Framework-GetLibs
[Embedded]: https://github.com/martin-eden/Embedded_Crafts
[Repos]: https://github.com/martin-eden/contents

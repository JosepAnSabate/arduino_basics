## GPS Location 

### HARDWARE
ELEGO UNO R3

GPS GY-NEO6MV2 NEO-6M 3V-5V

<p align="center">
<img   src="./img_gps_first_t/gps_module.PNG">
</p>

```bash
VCC -> 3.3V
Rx -> 3, pin de recepció.
Tx -> 4, pin de transmissió.
GND -> GND
```

### SOFTWARE

```
#include <SoftwareSerial.h>

SoftwareSerial gps(4,3);

char dato=' ';

void setup()
{
 Serial.begin(115200);            
 gps.begin(9600); 
}


void loop()
{
  if(gps.available())
  {
    dato=gps.read();
    Serial.print(dato);
  }

```

## RESULT
<p align="center">
<img   src="/img_gps_first/capura_coord.PNG">
</p>

The GPS needs some time for doing the right calculations and output the entire coordinates.

GPS module uses plain ASCII protocol known as NMEA. 
The GPGLL rows shows the coordinates as NMEA scentences.

GPGLL -> Geographic position, latitude, longitude.

[NMEA Decoder](http://freenmea.net/decoder)

I have used this web for decoing the NMEA coordinates.
/*

Credentials file

*/

#pragma once

// Only one of these settings must be defined
#define USE_ABP
//#define USE_OTAA

#ifdef USE_ABP

    // LoRaWAN NwkSKey, network session key
    static const u1_t PROGMEM NWKSKEY[16] = { 0xB8, 0x4B, 0x60, 0xF6, 0xD8, 0x06, 0x24, 0xCF, 0x24, 0xA6, 0x34, 0xFD, 0x8D, 0x47, 0x84, 0x0A };
    // LoRaWAN AppSKey, application session key
    static const u1_t PROGMEM APPSKEY[16] = { 0x82, 0x53, 0x88, 0x1B, 0xF2, 0xD8, 0x80, 0xD8, 0x3F, 0x11, 0xE5, 0xE4, 0x26, 0xBC, 0xBD, 0x91 };
    // LoRaWAN end-device address (DevAddr)
    // This has to be unique for every node
    static const u4_t DEVADDR = 0x26013594;

#endif

#ifdef USE_OTAA

    // This EUI must be in little-endian format, so least-significant-byte (lsb)
    // first. When copying an EUI from ttnctl output, this means to reverse
    // the bytes. For TTN issued EUIs the last bytes should be 0x00, 0x00,
    // 0x00.
    static const u1_t PROGMEM APPEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This should also be in little endian format (lsb), see above.
    // Note: You do not need to set this field, if unset it will be generated automatically based on the device macaddr
    static u1_t DEVEUI[8]  = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

    // This key should be in big endian format (msb) (or, since it is not really a
    // number but a block of memory, endianness does not really apply). In
    // practice, a key taken from ttnctl can be copied as-is.
    // The key shown here is the semtech default key.
    static const u1_t PROGMEM APPKEY[16] = { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

#endif

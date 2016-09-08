/*
    ModbusIP_ESP8266AT.h - Header for Modbus IP ESP8266 AT Library
    Copyright (C) 2015 Andr� Sarmento Barbosa
*/
#include <Arduino.h>
#include <Modbus.h>
#include <ESP8266.h>

#ifndef MODBUSIP_ESP8266AT_H
#define MODBUSIP_ESP8266AT_H

#ifndef MODBUSIP_PORT
  #define MODBUSIP_PORT     502
#endif
#ifndef MODBUSIP_MAXFRAME
  #define MODBUSIP_MAXFRAME 200
#endif
#ifndef MODBUSIP_TIMEOUT
  #define MODBUSIP_TIMEOUT   10
#endif

class ModbusIP : public Modbus {
    private:
        byte _MBAP[7];
        ESP8266* _wifi;
		bool prev_conn;
    public:
        ModbusIP();
        void config(ESP8266 &wifi, String ssid, String password);
        void task();
};

#endif //MODBUSIP_ESP8266AT_H


//
// Created by Adam Gilbert on 9/15/25.
//

#ifndef GUB3_GNSS6_H
#define GUB3_GNSS6_H
#include "core/io/UART.hpp"

class GNSS6 {
    #define TESEO_UART_BAUD_RATE 9600       // The UART baud rate
    #define TESEO_UART_BUFFER_SIZE 1024     // Buffer size for incoming data
    public:
        explicit GNSS6(core::io::UART* uart_device);
        void init();
        void parseResponse(char* response);
        void createCommand(char* input, char* formattedCommand);

    private:
        void requestGpsData();
        core::io::UART* uart_device;
};
#endif//GUB3_GNSS6_H

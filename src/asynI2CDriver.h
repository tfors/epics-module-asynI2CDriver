/* asynI2CDriver.h
 *
 * EPICS asynPortDriver support for i2c devices under Linux
 * using i2c-dev.
 *
 * Thomas Fors <tom@fors.net>
 * December, 2017
 */

#include "asynPortDriver.h"

class asynI2CDriver : public asynPortDriver {

public:
    asynI2CDriver(const char* portName, int i2cPortNum, int maxAddrIn,
                  int interfaceMask, int interruptMask, int asynFlags,
                  int autoConnect, int priority, int stackSize);

protected:
    int fd;
    int i2cPortNum;

    asynStatus i2c_connect(asynUser* pasynUser);
    asynStatus i2c_disconnect(asynUser* pasynUser);
    int i2c_wr_rd(unsigned short addr, unsigned char* tx, unsigned short tx_n,
                  unsigned char* rx, unsigned short rx_n);
};

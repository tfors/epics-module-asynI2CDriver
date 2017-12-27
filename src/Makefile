TOP=..

include $(TOP)/configure/CONFIG
#----------------------------------------
#  ADD MACRO DEFINITIONS AFTER THIS LINE
#=============================

#==================================================
# build a support library

LIBRARY_IOC += asynI2CDriver

# xxxRecord.h will be created from xxxRecord.dbd
#DBDINC += xxxRecord
# install asynI2CDriver.dbd into <top>/dbd
# DBD += asynI2CDriver.dbd

# specify all source files to be compiled and added to the library
asynI2CDriver_SRCS += asynI2CDriver.cpp

INC += asynI2CDriver.h

asynI2CDriver_LIBS += $(EPICS_BASE_IOC_LIBS)

#===========================

include $(TOP)/configure/RULES
#----------------------------------------
#  ADD RULES AFTER THIS LINE


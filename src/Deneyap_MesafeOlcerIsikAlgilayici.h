/*
*****************************************************************************
@file         Deneyap_MesafeOlcerIsikAlgilayici.h
@mainpage     Deneyap Proximity&Light Sensor LTR553 Arduino library header file
@version      v1.0.0
@date         June 24, 2022
@brief        This file contains all function prototypes and macros
              for Deneyap Proximity&Light Sensor LTR553 Arduino library
*****************************************************************************
*/

#ifndef __Deneyap_MesafeOlcerIsikAlgilayici_H__
#define __Deneyap_MesafeOlcerIsikAlgilayici_H__

#include <stdint.h>
#include <Wire.h>

#define LTR553_ADDR 0x23

#define LTR553_ALS_CONTR_REG 0x80
#define LTR553_PS_CONTR_REG 0x81
#define LTR553_PS_LED_REG 0x82
#define LTR553_PS_N_PULSES_REG 0x83
#define LTR553_PS_MEAS_RATE_REG 0x84
#define LTR553_ALS_MEAS_PATE_REG 0x85
#define LTR553_PART_ID_REG 0x86
#define LTR553_MANUFAC_ID_REG 0x87
#define LTR553_ALS_DATA_CH1_0_REG 0x88
#define LTR553_ALS_DATA_CH1_1_REG 0x89
#define LTR553_ALS_DATA_CH0_0_REG 0x8A
#define LTR553_ALS_DATA_CH0_1_REG 0x8B
#define LTR553_ALS_PS_STATUS_REG 0x8C
#define LTR553_PS_DATA_0_REG 0x8D
#define LTR553_PS_DATA_1_REG 0x8E
#define LTR553_INTERRUPT_REG 0x8F
#define LTR553_PS_THRES_UP_0_REG 0x90
#define LTR553_PS_THRES_UP_1_REG 0x91
#define LTR553_PS_THRES_LOW_0_REG 0x92
#define LTR553_PS_THRES_LOW_1_REG 0x93
#define LTR553_PS_OFFSET_1 0x94
#define LTR553_PS_OFFSET_0 0x95
#define LTR553_ALS_THRES_UP_0_REG 0x97
#define LTR553_ALS_THRES_UP_1_REG 0x98
#define LTR553_ALS_THRES_LOW_0_REG 0x99
#define LTR553_ALS_THRES_LOW_1_REG 0x9A
#define LTR553_INTERRUPT_PERSIST_REG 0x9E

/*===========================================================================*/

#define PS_ACTIVE_MODE 0x03
#define PS_STANDBY_MODE 0x00

#define PS_LED_PULSE_FREQUENCY_30KHZ 0x00
#define PS_LED_PULSE_FREQUENCY_40KHZ 0x20
#define PS_LED_PULSE_FREQUENCY_50KHZ 0x40
#define PS_LED_PULSE_FREQUENCY_60KHZ 0x60
#define PS_LED_PULSE_FREQUENCY_70KHZ 0x80
#define PS_LED_PULSE_FREQUENCY_80KHZ 0xA0
#define PS_LED_PULSE_FREQUENCY_90KHZ 0xC0
#define PS_LED_PULSE_FREQUENCY_100KHZ 0xE0

#define PS_LED_DUTY_CYCLE_25 0x00
#define PS_LED_DUTY_CYCLE_50 0x08
#define PS_LED_DUTY_CYCLE_75 0x10
#define PS_LED_DUTY_CYCLE_100 0x18

#define PS_LED_PEAK_CURRENT_5MA 0x00
#define PS_LED_PEAK_CURRENT_10MA 0x01
#define PS_LED_PEAK_CURRENT_20MA 0x02
#define PS_LED_PEAK_CURRENT_50MA 0x03
#define PS_LED_PEAK_CURRENT_100MA 0x04

#define PS_LED_PULSES_1 0x01
#define PS_LED_PULSES_2 0x02
#define PS_LED_PULSES_3 0x03
#define PS_LED_PULSES_4 0x04
#define PS_LED_PULSES_5 0x05
#define PS_LED_PULSES_6 0x06
#define PS_LED_PULSES_7 0x07
#define PS_LED_PULSES_8 0x08
#define PS_LED_PULSES_9 0x09
#define PS_LED_PULSES_10 0x0A
#define PS_LED_PULSES_11 0x0B
#define PS_LED_PULSES_12 0x0C
#define PS_LED_PULSES_13 0x0D
#define PS_LED_PULSES_14 0x0E
#define PS_LED_PULSES_15 0x0F

#define PS_MEASUREMENT_REPEAT_RATE_10MS 0x08
#define PS_MEASUREMENT_REPEAT_RATE_50MS 0x00
#define PS_MEASUREMENT_REPEAT_RATE_70MS 0x01
#define PS_MEASUREMENT_REPEAT_RATE_100MS 0x02
#define PS_MEASUREMENT_REPEAT_RATE_200MS 0x03
#define PS_MEASUREMENT_REPEAT_RATE_500MS 0x04
#define PS_MEASUREMENT_REPEAT_RATE_1000MS 0x05
#define PS_MEASUREMENT_REPEAT_RATE_2000MS 0x06

#define ALS_ACTIVE_MODE 0x01
#define ALS_STANDBY_MODE 0x00

#define ALS_GAIN_1X 0x00
#define ALS_GAIN_2X 0x04
#define ALS_GAIN_4X 0x08
#define ALS_GAIN_8X 0x0C
#define ALS_GAIN_48X 0x18
#define ALS_GAIN_96X 0x1C

#define ALS_SOFTWARE_RESET_DISABLE 0x00
#define ALS_SOFTWARE_RESET_ENABLE 0x02

#define ALS_INTEGRATION_TIME_50MS 0x08
#define ALS_INTEGRATION_TIME_100MS 0x00
#define ALS_INTEGRATION_TIME_150MS 0x20
#define ALS_INTEGRATION_TIME_200MS 0x10
#define ALS_INTEGRATION_TIME_250MS 0x28
#define ALS_INTEGRATION_TIME_300MS 0x30
#define ALS_INTEGRATION_TIME_350MS 0x38
#define ALS_INTEGRATION_TIME_400MS 0x18

#define ALS_MEAS_REPEAT_RATE_50MS 0x00
#define ALS_MEAS_REPEAT_RATE_100MS 0x01
#define ALS_MEAS_REPEAT_RATE_200MS 0x02
#define ALS_MEAS_REPEAT_RATE_500MS 0x03
#define ALS_MEAS_REPEAT_RATE_1000MS 0x04
#define ALS_MEAS_REPEAT_RATE_2000MS 0x05

/*===========================================================================*/

#define ALS_MODE_MASK 0x01
#define ALS_SOFTWARE_RESET_MASK 0x02
#define ALS_GAIN_MASK 0x1C
#define ALS_INTEGRATION_TIME_MASK 0x38
#define ALS_MEAS_REPEAT_RATE_MASK 0x07

#define ALS_CH1_DATA_LOW_MASK 0xF0
#define ALS_CH1_DATA_MID_MASK 0xFF
#define ALS_CH1_DATA_HIGH_MASK 0xFF

#define ALS_CH2_DATA_LOW_MASK 0xF0
#define ALS_CH2_DATA_MID_MASK 0xFF
#define ALS_CH2_DATA_HIGH_MASK 0xFF

#define PS_MODE_MASK 0x03
#define PS_SATURATION_INDICATOR_MASK 0x20
#define PS_LED_DUTY_CYCLE_MASK 0x18
#define PS_LED_PEAK_CURRENT_MASK 0x07
#define PS_LED_PULSE_FREQUENCY_MASK 0xE0

#define PS_DATA_LOW_MASK 0xFF
#define PS_DATA_HIGH_MASK 0x07

#define PART_NUMBER_ID_MASK 0xF0
#define REVISION_ID_MASK 0x0F

/*===========================================================================*/

#define GAIN_1X 1
#define GAIN_2X 2
#define GAIN_4X 4
#define GAIN_8X 8
#define GAIN_48X 48
#define GAIN_96X 96

#define INTEGRATION_TIME_100 1
#define INTEGRATION_TIME_150 1.5
#define INTEGRATION_TIME_200 2
#define INTEGRATION_TIME_250 2.5
#define INTEGRATION_TIME_300 3
#define INTEGRATION_TIME_350 3.5
#define INTEGRATION_TIME_400 4

/*===========================================================================*/

class ProximityAL
{
public:
    void begin(uint8_t address);
    void startSensor(uint8_t psMode, uint8_t alsMode);
    void softwareReset(void);
    void setALSmode(uint8_t mode);
    void setALSgain(uint8_t gain);
    uint8_t getALSgain(void);
    void setPSmode(uint8_t mode);
    void setPSsaturationIndicator(uint8_t strIndicator);
    void setPSledPulseFreq(uint8_t ledPulseFreq);
    void setPSledDutyCycle(uint8_t ledDutyCycle);
    void setPSledPeakCurrent(uint8_t ledPeakCurrent);
    void setPSledPulse(uint8_t ledPulse);
    void setPSmeasurementRate(uint8_t measRate);
    void setALSintegrationTime(uint8_t intTime);
    uint8_t getALSintegrationTime(void);
    void setALSmeasurementRate(uint8_t measRate);
    uint8_t getPartNumberID(void);
    uint8_t getRevisionID(void);
    uint8_t getManufacturerID(void);
    uint16_t getPSvalue(void);
    uint16_t getALSCH0value(void);
    uint16_t getALSCH1value(void);
    float getLuxValue(void);

private:
    uint8_t _address;
    void readRegs(uint8_t start_reg_addr, uint8_t *pdata, uint8_t size);
    void writeRegs(int registerAddress, uint8_t dataValue);
};

#endif /* Deneyap_MesafeOlcerIsikAlgilayici_H */

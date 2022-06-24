/*
*****************************************************************************
@file         Deneyap_MesafeOlcerIsikAlgilayici.cpp
@mainpage     Deneyap Proximity&Light Sensor LTR553 Arduino library source file
@maintainer   RFtek Electronics <techsupport@rftek.com.tr>
@version      v1.0.0
@date         June 24, 2022
@brief        Includes functions to control Deneyap Proximity&Light Sensor LTR553
              Arduino library

Library includes:
--> Configuration functions
--> Data manipulation functions
--> I2C communication functions
*****************************************************************************
*/

#include "Deneyap_MesafeOlcerIsikAlgilayici.h"

/**
 * @brief  I2C initialization and read check
 * @param  adress: Device adress
 * @retval None
 **/
void ProximityAL::begin(uint8_t address) {

    _address = address;
    Wire.begin();
    softwareReset();
    setPSledPulse(PS_LED_PULSES_15);
    setALSmode(ALS_ACTIVE_MODE);
    setPSmode(PS_ACTIVE_MODE);
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::setALSmode(uint8_t mode) {
    uint8_t readValue, writeValue;
    readRegs(LTR553_ALS_CONTR_REG, &readValue, 1);
    readValue &= (~ALS_MODE_MASK);
    writeValue = readValue | mode;
    writeRegs(LTR553_ALS_CONTR_REG, writeValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::setPSmode(uint8_t mode) {
    uint8_t readValue, writeValue;
    readRegs(LTR553_PS_CONTR_REG, &readValue, 1);
    readValue &= (~PS_MODE_MASK);
    writeValue = readValue | mode;
    writeRegs(LTR553_PS_CONTR_REG, writeValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::softwareReset(void) {
    uint8_t readValue, writeValue;
    readRegs(LTR553_ALS_CONTR_REG, &readValue, 1);
    readValue &= (~ALS_SOFTWARE_RESET_MASK);
    writeValue = readValue | 0x02;
    writeRegs(LTR553_ALS_CONTR_REG, writeValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::setALSgain(uint8_t gain) {
    uint8_t readValue, writeValue;
    readRegs(LTR553_ALS_CONTR_REG, &readValue, 1);
    readValue &= (~ALS_GAIN_MASK);
    writeValue = readValue | gain;
    writeRegs(LTR553_ALS_CONTR_REG, writeValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
uint8_t ProximityAL::getALSgain(void) {
    uint8_t readValue, result;
    readRegs(LTR553_ALS_CONTR_REG, &readValue, 1);
    readValue &= ALS_GAIN_MASK;
    return result = readValue;
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::setPSsaturationIndicator(uint8_t strIndicator) {
    uint8_t readValue, writeValue;
    readRegs(LTR553_PS_CONTR_REG, &readValue, 1);
    readValue &= (~PS_SATURATION_INDICATOR_MASK);
    writeValue = readValue | strIndicator;
    writeRegs(LTR553_PS_CONTR_REG, writeValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::setPSledPulseFreq(uint8_t ledPulseFreq) {
    uint8_t readValue, writeValue;
    readRegs(LTR553_PS_LED_REG, &readValue, 1);
    readValue &= (~PS_LED_PULSE_FREQUENCY_MASK);
    writeValue = readValue | ledPulseFreq;
    writeRegs(LTR553_PS_LED_REG, writeValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::setPSledDutyCycle(uint8_t ledDutyCycle) {
    uint8_t readValue, writeValue;
    readRegs(LTR553_PS_LED_REG, &readValue, 1);
    readValue &= (~PS_LED_DUTY_CYCLE_MASK);
    writeValue = readValue | ledDutyCycle;
    writeRegs(LTR553_PS_LED_REG, writeValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::setPSledPeakCurrent(uint8_t ledPeakCurrent) {
    uint8_t readValue, writeValue;
    readRegs(LTR553_PS_LED_REG, &readValue, 1);
    readValue &= (~PS_LED_PEAK_CURRENT_MASK);
    writeValue = readValue | ledPeakCurrent;
    writeRegs(LTR553_PS_LED_REG, writeValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::setPSledPulse(uint8_t ledPulse) {
    uint8_t registerValue;
    registerValue = ledPulse;
    writeRegs(LTR553_PS_N_PULSES_REG, registerValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::setPSmeasurementRate(uint8_t measRate) {
    uint8_t registerValue;
    registerValue = measRate;
    writeRegs(LTR553_PS_MEAS_RATE_REG, registerValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::setALSintegrationTime(uint8_t intTime) {
    uint8_t readValue, writeValue;
    readRegs(LTR553_ALS_MEAS_PATE_REG, &readValue, 1);
    readValue &= (~ALS_INTEGRATION_TIME_MASK);
    writeValue = readValue | intTime;
    writeRegs(LTR553_ALS_MEAS_PATE_REG, writeValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
uint8_t ProximityAL::getALSintegrationTime(void) {
    uint8_t readValue, result;
    readRegs(LTR553_ALS_MEAS_PATE_REG, &readValue, 1);
    readValue &= ALS_INTEGRATION_TIME_MASK;
    return result = readValue;
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::setALSmeasurementRate(uint8_t measRate) {
    uint8_t readValue, writeValue;
    readRegs(LTR553_ALS_MEAS_PATE_REG, &readValue, 1);
    readValue &= (~ALS_MEAS_REPEAT_RATE_MASK);
    writeValue = readValue | measRate;
    writeRegs(LTR553_ALS_MEAS_PATE_REG, writeValue);
}

/**
 * @brief
 * @param
 * @retval
 **/
uint8_t ProximityAL::getPartNumberID(void) {
    uint8_t readValue, result;
    readRegs(LTR553_PART_ID_REG, &readValue, 1);
    readValue &= PART_NUMBER_ID_MASK;
    return result = readValue >> 4;
}

/**
 * @brief
 * @param
 * @retval
 **/
uint8_t ProximityAL::getRevisionID(void) {
    uint8_t readValue, result;
    readRegs(LTR553_PART_ID_REG, &readValue, 1);
    readValue &= REVISION_ID_MASK;
    return result = readValue;
}

/**
 * @brief
 * @param
 * @retval
 **/
uint8_t ProximityAL::getManufacturerID(void) {
    uint8_t readValue, result;
    readRegs(LTR553_MANUFAC_ID_REG, &readValue, 1);
    return result = readValue;
}

/**
 * @brief
 * @param
 * @retval
 **/
uint16_t ProximityAL::getPSvalue(void) {
    uint8_t buffer[2];
    uint16_t result;
    readRegs(LTR553_PS_DATA_0_REG, &buffer[0], 2);
    buffer[0] &= PS_DATA_LOW_MASK;
    buffer[1] &= PS_DATA_HIGH_MASK;
    result = (buffer[1] << 8) | buffer[0];
    return result;
}

/**
 * @brief
 * @param
 * @retval
 **/
uint16_t ProximityAL::getALSCH0value(void) {
    uint8_t buffer[2];
    uint32_t result;
    readRegs(LTR553_ALS_DATA_CH0_0_REG, &buffer[0], 2);
    result = (buffer[1] << 8) | buffer[0];
    return result;
}

/**
 * @brief
 * @param
 * @retval
 **/
uint16_t ProximityAL::getALSCH1value(void) {
    uint8_t buffer[2];
    uint32_t result;
    readRegs(LTR553_ALS_DATA_CH1_0_REG, &buffer[0], 2);
    result = (buffer[1] << 8) | buffer[0];
    return result;
}

/**
 * @brief
 * @param
 * @retval
 **/
float ProximityAL::getLuxValue(void) {
    uint16_t CH0, CH1;
    float ratio;
    CH1 = getALSCH1value();
    CH0 = getALSCH0value();

    ratio = ((float)(CH1 / ((float)CH1 + CH0)));

    if (ratio < 0.45)
        return ((float)1.7743 * CH0) + ((float)1.1059 * CH1);

    else if (0.45 <= ratio && ratio < 0.64)
        return ((float)4.2785 * CH0) - ((float)1.9548 * CH1);

    else if (0.64 <= ratio && ratio < 0.85)
        return ((float)0.5926 * CH0) + ((float)0.1185 * CH1);

    else
        return 0;
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::writeRegs(int registerAddress, uint8_t dataValue) {
    Wire.beginTransmission(_address);
    Wire.write(registerAddress);
    Wire.write(dataValue);
    Wire.endTransmission();
}

/**
 * @brief
 * @param
 * @retval
 **/
void ProximityAL::readRegs(uint8_t start_reg_addr, uint8_t *pdata, uint8_t size) {

    Wire.beginTransmission(_address);
    Wire.write(start_reg_addr);
    Wire.endTransmission();
    Wire.requestFrom(_address, size);
    
    for (uint8_t i = 0; i < size; i++) {
        *(pdata + i) = Wire.read();
    }
}

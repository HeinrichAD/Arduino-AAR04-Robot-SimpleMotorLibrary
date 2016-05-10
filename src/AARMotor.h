/******************************************************************************
 * AREXX AAR-04 ARDUINO ROBOT
 * AARobot motor handling class.
 *
 ******************************************************************************
 * Autors
 * HeinrichAD
 *
 ******************************************************************************
 * License
 * GNU General Public License v3.0, see LICENSE file.
 *
 ******************************************************************************
 * Source code
 * **GIT REPOSITORY URL**
 *
******************************************************************************/

#ifndef _AARMOTOR_h
#define _AARMOTOR_h

// Import pin definitions.
// **GIT REPOSITORY URL**
#include "AARPins.h"

/**
 * AAR Robot motor handling class.
**/
class AARMotorClass
{
public:
    uint8_t Speed; // default

    void Init();
    void Init(uint8_t speed);

    void Reset();
    void Stop();

    void RightForward(uint32_t time);
    void RightForward(uint32_t time,
                      uint8_t speed);

    void RightBackward(uint32_t time);
    void RightBackward(uint32_t time,
                      uint8_t speed);

    void LeftForward(uint32_t time);
    void LeftForward(uint32_t time,
                     uint8_t speed);

    void LeftBackward(uint32_t time);
    void LeftBackward(uint32_t time,
                     uint8_t speed);

    void Forward(uint32_t time);
    void Forward(uint32_t time,
                 uint8_t speed);

    void Backward(uint32_t time);
    void Backward(uint32_t time,
                  uint8_t speed);

    void TurnOnSpotRight(uint32_t time);
    void TurnOnSpotRight(uint32_t time,
                         uint8_t speed);

    void TurnOnSpotLeft(uint32_t time);
    void TurnOnSpotLeft(uint32_t time,
                        uint8_t speed);
};

#endif

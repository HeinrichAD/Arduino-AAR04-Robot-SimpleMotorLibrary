#include "AARMotor.h"

void AARMotorClass::Init()
{
    // Setup: Initalization.
    pinMode(PIN_MOTOR_RIGHT_FORWARD, OUTPUT);
    pinMode(PIN_MOTOR_RIGHT_BACKWARD, OUTPUT);
    pinMode(PIN_MOTOR_LEFT_FORWARD, OUTPUT);
    pinMode(PIN_MOTOR_LEFT_BACKWARD, OUTPUT);

    // Motor stop.
    this->Stop();

    // Reset motor.
    this->Reset();
}


void AARMotorClass::Init(uint8_t speed)
{
    this->Init();
    this->Speed = speed;
}


void AARMotorClass::Reset()
{
    // Then set the start value of the signals to zero.
    analogWrite(PIN_MOTOR_RIGHT_FORWARD, 0);
    analogWrite(PIN_MOTOR_RIGHT_BACKWARD, 0);
    analogWrite(PIN_MOTOR_LEFT_FORWARD, 0);
    analogWrite(PIN_MOTOR_LEFT_BACKWARD, 0);
}


void AARMotorClass::Stop()
{
    // Stop right motor.
    digitalWrite(PIN_MOTOR_RIGHT_FORWARD, LOW);
    digitalWrite(PIN_MOTOR_RIGHT_BACKWARD, LOW);

    // Stop left motor.
    digitalWrite(PIN_MOTOR_LEFT_FORWARD, LOW);
    digitalWrite(PIN_MOTOR_LEFT_BACKWARD, LOW);
}


void AARMotorClass::RightForward(uint32_t time)
{
    this->RightForward(time, this->Speed);
}


void AARMotorClass::RightForward(uint32_t time, uint8_t speed)
{
    // Motor setup for a right run.
    analogWrite(PIN_MOTOR_RIGHT_FORWARD, speed);

    if (time > 0) // Zero for infinitely.
    {
        // Run time.
        delay(time);

        // Motor stop.
        digitalWrite(PIN_MOTOR_RIGHT_FORWARD, LOW);
    }
}


void AARMotorClass::RightBackward(uint32_t time)
{
    this->RightBackward(time, this->Speed);
}


void AARMotorClass::RightBackward(uint32_t time, uint8_t speed)
{
    // Motor setup for a right run.
    analogWrite(PIN_MOTOR_RIGHT_BACKWARD, speed);

    if (time > 0) // Zero for infinitely.
    {
        // Run time.
        delay(time);

        // Motor stop.
        digitalWrite(PIN_MOTOR_RIGHT_BACKWARD, LOW);
    }
}


void AARMotorClass::LeftForward(uint32_t time)
{
    this->LeftForward(time, this->Speed);
}


void AARMotorClass::LeftForward(uint32_t time, uint8_t speed)
{
    // Motor setup for a left run.
    analogWrite(PIN_MOTOR_LEFT_FORWARD, speed);

    if (time > 0) // Zero for infinitely.
    {
        // Run time.
        delay(time);

        // Motor stop.
        digitalWrite(PIN_MOTOR_LEFT_FORWARD, LOW);
    }
}


void AARMotorClass::LeftBackward(uint32_t time)
{
    this->LeftBackward(time, this->Speed);
}


void AARMotorClass::LeftBackward(uint32_t time, uint8_t speed)
{
    // Motor setup for a left run.
    analogWrite(PIN_MOTOR_LEFT_BACKWARD, speed);

    if (time > 0) // Zero for infinitely.
    {
        // Run time.
        delay(time);

        // Motor stop.
        digitalWrite(PIN_MOTOR_LEFT_BACKWARD, LOW);
    }
}


void AARMotorClass::Forward(uint32_t time)
{
    this->Forward(time, this->Speed);
}


void AARMotorClass::Forward(uint32_t time, uint8_t speed)
{
    // Motor setup for a forward run.
    analogWrite(PIN_MOTOR_LEFT_FORWARD, speed);
    analogWrite(PIN_MOTOR_RIGHT_FORWARD, speed);

    if (time > 0) // Zero for infinitely.
    {
        // Run time.
        delay(time);

        // Motor stop.
        digitalWrite(PIN_MOTOR_LEFT_FORWARD, LOW);
        digitalWrite(PIN_MOTOR_RIGHT_FORWARD, LOW);
    }
}


void AARMotorClass::Backward(uint32_t time)
{
    this->Backward(time, this->Speed);
}


void AARMotorClass::Backward(uint32_t time, uint8_t speed)
{
    // Motor setup for a backward run.
    analogWrite(PIN_MOTOR_LEFT_BACKWARD, speed);
    analogWrite(PIN_MOTOR_RIGHT_BACKWARD, speed);

    if (time > 0) // Zero for infinitely.
    {
        // Run time.
        delay(time);

        // Motor stop.
        digitalWrite(PIN_MOTOR_LEFT_BACKWARD, LOW);
        digitalWrite(PIN_MOTOR_RIGHT_BACKWARD, LOW);
    }
}


void AARMotorClass::TurnOnSpotRight(uint32_t time)
{
    this->TurnOnSpotRight(time, this->Speed);
}


void AARMotorClass::TurnOnSpotRight(uint32_t time, uint8_t speed)
{
    // Motor setup for a right turn on spot.
    analogWrite(PIN_MOTOR_LEFT_FORWARD, speed);
    analogWrite(PIN_MOTOR_RIGHT_BACKWARD, speed);

    if (time > 0) // Zero for infinitely.
    {
        // Run time.
        delay(time);

        // Motor stop.
        digitalWrite(PIN_MOTOR_LEFT_FORWARD, LOW);
        digitalWrite(PIN_MOTOR_RIGHT_BACKWARD, LOW);
    }
}


void AARMotorClass::TurnOnSpotLeft(uint32_t time)
{
    this->TurnOnSpotLeft(time, this->Speed);
}


void AARMotorClass::TurnOnSpotLeft(uint32_t time, uint8_t speed)
{
    // Motor setup for a left turn on spot.
    analogWrite(PIN_MOTOR_LEFT_BACKWARD, speed);
    analogWrite(PIN_MOTOR_RIGHT_FORWARD, speed);

    if (time > 0) // Zero for infinitely.
    {
        // Run time.
        delay(time);

        // Motor stop.
        digitalWrite(PIN_MOTOR_LEFT_BACKWARD, LOW);
        digitalWrite(PIN_MOTOR_RIGHT_FORWARD, LOW);
    }
}

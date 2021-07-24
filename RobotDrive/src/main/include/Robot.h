// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>
#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>

#include <frc/Joystick.h>
#include <frc/BuiltInAccelerometer.h>
#include <frc/DriverStation.h>
#include <frc/DoubleSolenoid.h>
#include <frc/Servo.h>
#include "rev/CANSparkMax.h"


using namespace frc;

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;

  void AutonomousInit() override;
  void AutonomousPeriodic() override;

  void TeleopInit() override;
  void TeleopPeriodic() override;

  void DisabledInit() override;
  void DisabledPeriodic() override;

  void TestInit() override;
  void TestPeriodic() override;
  
  const int rMotorFrontNum = 13;
  const int rMotorBackNum = 16;
  const int lMotorFrontNum = 2;
  const int lMotorBackNum = 3; 

  rev::CANSparkMax * lMotorFront = new rev::CANSparkMax(lMotorFrontNum, rev::CANSparkMax::MotorType::kBrushless);
  rev::CANSparkMax * lMotorBack = new rev::CANSparkMax(lMotorBackNum, rev::CANSparkMax::MotorType::kBrushless);
  rev::CANSparkMax * rMotorBack = new rev::CANSparkMax(rMotorBackNum, rev::CANSparkMax::MotorType::kBrushless);
  rev::CANSparkMax * rMotorFront = new rev::CANSparkMax(rMotorFrontNum, rev::CANSparkMax::MotorType::kBrushless);
};

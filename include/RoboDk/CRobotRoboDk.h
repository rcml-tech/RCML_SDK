#ifndef RCML_SDK_CROBOTROBODK_H
#define RCML_SDK_CROBOTROBODK_H

#include <RCML_sdk.h>

#include <BaseRobots/CPromRobot.h>
#include <RoboDk/robo_dk_types.h>
#include <DataTypes/CJson.h>
#include <RoboDk/Validator/CValidatorTypes.h>

namespace RCML {

  class RCML_SDK_API CRobotRoboDk : public CPromRobot{    
  public:
    CRobotRoboDk();

    void Init(Types::CJson Settings) override; 

    std::string GetName();

    CJointCoordinatePtr GetAngles() override;
    void MoveJoint(CPoints Points, bool Queue = false) override;

    CCartesianCoordinatePtr GetCoordinate() override;
    void MoveCartesian(CPoints Points, bool Queue = false) override;
    void MoveCartesianRelative(CPoints Points, bool Queue = false) override;

    void MoveLineral(CPoints Points, bool Queue = false) override;
    void MoveLineralRelative(CPoints Points, bool Queue = false) override;

    void ArcMove(CPoints Points, bool Queue = false) override;

    void SetBase(int Base, bool Queue = false) override;
    void SetTool(int Tool, bool Queue = false) override;
    void SetLoad(int Load, bool Queue = false) override;
    
    int GetTool() override;
    int GetBase() override;
    int GetLoad() override;

	  void SetDI(int Value, int InputNumber, bool Queue = false) override;
	  int GetDI(int InputNumber) override;
	  int GetDO(int OutputNumber) override;
    
    void StartProgram(CVariantArray Params, bool Queue = false) override;
    void EmergancyStop() override;
    void ReturnToWork() override;
    CRobotInternalError* GetInternalError() override;
    
    void setCollisionDetect(bool collisionDetect);
    bool getCollisionDetect();

  private:
    CItemPtr m_robotLinkPtr = nullptr;
    CRoboLinkPtr m_RoboLink = nullptr;
    CValidatorPtr m_validatorPtr = nullptr;

    bool m_collisionDetect = false;
    
    void DoAdd(CActionPtr Ptr, bool Queue);
    
  };

  typedef std::shared_ptr<CRobotRoboDk> CRobotRoboDkPtr;
}

#endif //RCML_SDK_CROBOTROBODK_H

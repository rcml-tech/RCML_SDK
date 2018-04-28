#ifndef __RCML_CRoboDKRobot_h
#define __RCML_CRoboDKRobot_h

#include <_core/RCML_sdk.h>
#include <_core/DataTypes/CJson.h>
#include <_core/Robots/CRobotInd.h>

#include <RoboDK/RoboDKTypes.h>

namespace RCML {

  class RCML_SDK_API CRoboDKRobot : public CRobotInd {    
  public:
    CRoboDKRobot(BaseTypes::Identifier m_id, std::string m_name, Types::CJson settings);
    virtual ~CRoboDKRobot();

    void setCollisionDetect(bool collisionDetect);
    bool getCollisionDetect();

  protected:
    CSignals executeGetDI(CSignals signalsDI) override;
    CSignals executeGetDO(CSignals signalsDO) override;
    void executeSetDO(CSignals obj) override;
    
    void executeMoveJoint(CPoints points) override;
    void executeMoveJointRelative(CPoints points) override;
    CCoordinateJointPtr executeGetAngles() override;

    void executeMoveCartesian(CPoints points) override;
    void executeMoveCartesianRelative(CPoints points) override;
    CCoordinateCartesianPtr executeGetCoordinate() override;

    void executeMoveLinear(CPoints points) override;
    void executeMoveLinearRelative(CPoints points) override;

    void executeMoveArc(CPoints points) override;
    void executeMoveArcRelative(CPoints points) override;

    BaseTypes::Index executeIndOption(CActionIndOption::Option option, CActionIndOption::Action action, BaseTypes::Index index) override;

    void executeStartProgram(std::string programName) override;

    void executeEmergencyStop() override;
    void executeReturnToWork() override;
    
  private:
    RoboDK_API::tJoints getJoints();
    double *getJointsValues(RoboDK_API::tJoints joints);
    void universalMoveByCartesian(CPoints points, bool isLinear);
    void universalMoveRelativeByCartesian(CPoints points, bool isLinear);

    static RoboDK_API::Mat pointToPose(CPoint point);

    RoboDKTypes::LinkPtr m_roboDK = nullptr;
    RoboDKTypes::ItemPtr m_robot = nullptr;
    
    bool m_collisionDetect = false;
  };

  typedef std::shared_ptr<CRoboDKRobot> CRoboDKRobotPtr;
}

#endif

#ifndef COM_BAROBO_ROBOT_INTERFACE
#define COM_BAROBO_ROBOT_INTERFACE

/* GENERATED CODE */

#include "rpc/object.hpp"
#include "robot.pb.h"

namespace com {
namespace barobo {

/* Forward declaration of interface */
template <class Derived>
class Robot;

} // namespace barobo
} // namespace com

namespace rpc {

template <>
struct Attribute<com::barobo::Robot> {
    using motorPower = com_barobo_Robot_motorPower;
};

template <>
struct Method<com::barobo::Robot> {
    using move = com_barobo_Robot_move;
};

template <>
struct Broadcast<com::barobo::Robot> {
    using buttonPress = com_barobo_Robot_buttonPress;
};

template <>
union ArgumentUnion<com::barobo::Robot> {
    typename Attribute<com::barobo::Robot>::motorPower motorPower;
    typename Method<com::barobo::Robot>::move move;
};

template <>
void decodeToObjectPayload (ArgumentUnion<com::barobo::Robot>& args, com_barobo_rpc_ToObject& toObject);

template <>
struct ComponentId<com::barobo::Robot> {
    enum {
        motorPower,
        move,
        buttonPress
    };
};

} // namespace rpc

namespace com {
namespace barobo {

template <class Derived>
struct Robot {
    typename rpc::Attribute<Robot>::motorPower motorPower () const {
        rpc::Attribute<Robot>::motorPower args;
        static_cast<Derived&>(*this).on_(args, rpc::Get());
        return args;
    }

    void motorPower (typename rpc::Attribute<Robot>::motorPower args) {
        static_cast<Derived&>(*this).on_(args, rpc::Set());
    }

    void move (float desiredAngle1, float desiredAngle2, float desiredAngle3) {
        using Method = typename rpc::Method<Robot>::move;
        Method args {
            { desiredAngle1, desiredAngle2, desiredAngle3 }
        };
        static_cast<Derived&>(*this).on_(args);
    }
};

} // namespace barobo
} // namespace com

#endif
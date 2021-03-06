#ifndef barobo_Widget_INTERFACE
#define barobo_Widget_INTERFACE

#include "rpc/def.hpp"
#include "widget.pb.h"

RPCDEF_HPP(
        // the interface we're defining and it's version triplet
        (barobo, Widget), (0, 0, 0),
        // all methods
        (nullaryNoResult)
        (nullaryWithResult)
        (unaryNoResult)
        (unaryWithResult)
        ,
        // all broadcasts
        (broadcast)
        )

#endif

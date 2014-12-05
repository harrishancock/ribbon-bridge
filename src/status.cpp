#include "rpc/status.hpp"

namespace rpc {

const char* statusToString (Status status) {
#define ITEM(x) case Status::x: return #x
    switch (status) {
        ITEM(OK);
        ITEM(DECODING_FAILURE);
        ITEM(ENCODING_FAILURE);
        ITEM(INCONSISTENT_REQUEST);
        ITEM(INCONSISTENT_REPLY);
        ITEM(ILLEGAL_OPERATION);
        ITEM(NO_SUCH_COMPONENT);
        ITEM(NOT_CONNECTED);
        ITEM(CONNECTION_REFUSED);

        ITEM(UNSOLICITED_REPLY);
        ITEM(UNRECOGNIZED_RESULT);
        default:
            return "(unknown status)";
    }
#undef ITEM
}

const char* statusToString (RemoteStatus status) {
#define ITEM(x) case RemoteStatus::x: return "remote " #x
    switch (status) {
        ITEM(OK);
        ITEM(DECODING_FAILURE);
        ITEM(ENCODING_FAILURE);
        ITEM(INCONSISTENT_REQUEST);
        ITEM(INCONSISTENT_REPLY);
        ITEM(ILLEGAL_OPERATION);
        ITEM(NO_SUCH_COMPONENT);
        ITEM(NOT_CONNECTED);
        ITEM(CONNECTION_REFUSED);
        default:
            return "(unknown remote status)";
    }
#undef ITEM
}

} // namespace rpc

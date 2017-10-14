#ifndef BC_DEMO_MSG_H
#define BC_DEMO_MSG_H

namespace api {
struct CreateCargoMsg
{
    int Id;
    int AfterDays;
};
}

namespace gateways {
struct CargoCreatedMsg {
    int Id;
};
}
#endif //BC_DEMO_MSG_H

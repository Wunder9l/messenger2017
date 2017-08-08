#pragma once
#include "data_structures/NodeInfo.h"
#include "data_structures/Message.h"
#include "data_structures/NodeContainingObject.h"

namespace m2 {
namespace routing {
class Processor : protected virtual NodeContainingObject
{
public:
    Processor(Node& node, uuid request_id);
    ~Processor() {}

    virtual void process(NodeInfo node_info, void* additional_data) = 0;

protected:
    uuid request_id;
    virtual void sendRequest(NodeInfo recipient) = 0;
};

} //namespace routing
} //namespace m2

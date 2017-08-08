#pragma once
#include "data_structures/messages/Message.h"
#include "data_structures/NodeContainingObject.h"

namespace m2 {
namespace routing {
/// Command handler is an abstract class for all handlers of incoming messages
class CommandHandler : protected virtual NodeContainingObject
{
public:
    CommandHandler(Node& node);
    ~CommandHandler();

public:
    virtual void handleMessage(Message message) = 0;

private:
};

} // namespace routing
} // namespace m2

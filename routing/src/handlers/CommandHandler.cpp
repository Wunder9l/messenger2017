#include "handlers/CommandHandler.h"
#include "core/Node.h"

namespace m2 {
namespace routing {

CommandHandler::CommandHandler(Node& node):NodeContainingObject(node)
{
}

CommandHandler::~CommandHandler()
{
}

} // namespace routing
} // namespace m2

#include "processors/FindProcessor.h"


namespace m2 {
namespace routing {
class FindNodeProcessor: public FindProcessor
{
public:
    //Message* handleMessage(Message message);
    virtual void process(uuid guid);

protected:
    // Fields

    // Methdods 
    virtual void sendRequest(NodeInfo recipient);

};
}
}
#pragma once
#include "CommandHandler.h"
class FindNodeHandler : public CommandHandler
{

#pragma region __ Constructor and destructor __
public:
    FindNodeHandler(Node* node);
    ~FindNodeHandler();
#pragma endregion

#pragma region __ Methods __

private:
#pragma region __ Private methods __
    Message* processMessage(Message message);
#pragma endregion

public:
#pragma region __ Public methods __

#pragma endregion

#pragma endregion


};

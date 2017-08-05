#pragma once

#include <map>
#include <list>
#include <algorithm>

#include "data_structures/NodeInfo.h"
#include "kbuckets/KBucket.h"
#include "kbuckets/KBucketsTools.h"
#include "utils/Config.h"

namespace m2 {
namespace routing {

class KBucketsManager
{
public:
    KBucketsManager(); //TODO remove it, it's temporary for build
    KBucketsManager(const NodeInfo &nodeInfo);

    void insert(const NodeInfo &nodeInfo);

    void getNeighbours(const NodeInfo &nodeInfo) const;

private:
    std::map<int, KBucket> intervalToBucket;

    NodeInfo ourNodeInfo;

    int getIntervalInMap(int xorResult);

};
        
} // namespace routing
} // namespace m2
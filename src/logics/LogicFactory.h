//
// Created by Martin Blicha on 27.07.20.
//

#include "SMTConfig.h"

class Logic;
class LRALogic;
class LIALogic;


#ifndef OPENSMT_LOGICFACTORY_H
#define OPENSMT_LOGICFACTORY_H

namespace opensmt {

class LogicFactory {
public:
    static Logic * getInstance(SMTConfig & config);
    static LRALogic * getLRAInstance(SMTConfig & config);
    static LIALogic * getLIAInstance(SMTConfig & config);
};
}
#endif //OPENSMT_LOGICFACTORY_H
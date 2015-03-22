#include "Global_Clock.h"
#include "JobGen_PJS.h"
#include "Node_PJS.h"
#include "CCU_Node.h"
#include "PJS_Node.h"
#include "CCU_PJS.h"
class communication : Global_Clock, public JobGen_PJS, Node_PJS, CCU_Node, PJS_Node, CCU_PJS
{
  public:
    communication() {}
};


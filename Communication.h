#include "JobGen_PJS.h"

class communication : Global_Clock, public JobGen_PJS, Node_PJS, CCU_Node, PJS_Node, CCU_PJS
{
  public:
    communication() {}
};


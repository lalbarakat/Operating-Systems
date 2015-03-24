#include "clock.h"
//#include "JobGen_PJS.h"
#include "nodepjs.h"
#include "ccunode.h"
//#include "PJS_Node.h"
#include "ccupjs.h"
class communication : Global_Clock, public /*JobGen_PJS,*/ Node_PJS, CCU_Node, /*PJS_Node,*/ CCU_PJS
{
  public:
    communication() {}
};


class Job
{
    
    int job_id;
}

class Global_Clock
{
  int counter;
}

class JobGen_PJS
{


}

class Node_PJS
{
}

class CCU_Node
{

}

class PJS_Node
{

}

class CCU_PJS
{

}

class communication : Global_Clock, JobGen_PJS, Node_PJS, CCU_Node, PJS_Node, CCU_PJS
{

}

class Job_Generator : communication
{

}

class PJS : communication
{

}

class Apollo : PJS
{

}

class Baseline : PJS
{
 
}

class CCU : communication
{

}

class Node : communication
{
 
}



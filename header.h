#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>

class Global_Clock
{
  int counter;
};

class JobGen_PJS : public Job
{
  public:
    JobGen_PJS() : Job(){}
};

class Node_PJS
{
};

class CCU_Node
{
  int memory_usage;
};

class PJS_Node
{

};

class CCU_PJS
{

};

class communication : Global_Clock, public JobGen_PJS, Node_PJS, CCU_Node, PJS_Node, CCU_PJS
{
  public:
    communication() {}
};


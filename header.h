#include<stdio.h>
#include<iostream>
#include<vector>
#include<list>

//Task class represents a task in a Job.
class task
{
 
 // member variables
 int task_id; // task id unqiue for each task in a job.
 int CPU_time; // Amount of time CPU takes to execute the task.
 int memory_required; // Amount of Main Memory required to execute the task.
 
 public :
 // Constructor
 task(int taskid, int cputime, int memoryrequired)
 {
    task_id = taskid;
    CPU_time = cputime;
    memory_required = memoryrequired;
 }
 
 //get functions
 int get_taskid() { return task_id;}
 int get_cputime() { return CPU_time;}
 int get_memrequired() { return memory_required;}
 
 //Set functions
 void set_taskid() { task_id = taskid; }
 void set_cputime() { CPU_time = cputime;}
 void set_memrequired() { memory_required = memoryrequired; }

}

class Job
{
    
    int job_id;
    std::vector <std::list<task> > adlist(5);    
    public:
    //constructor
    Job(int jobid, std::vector <std::list<task> > graph)
    {
      job_id = jobid;
      adlist = graph;
    }
    
}

class Global_Clock
{
  int counter;
}

class JobGen_PJS : Job
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
 
   public: 
   
   void genereate_jobs(std::vector <std::list<task>> Graph)
   {
        Job job_obj = new Job(Graph);
   }
      

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



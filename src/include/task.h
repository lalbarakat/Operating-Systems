

//Task class represents a task in a Job.
class task
{

  private:
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
   void set_taskid(int taskid) { task_id = taskid; }
   void set_cputime(int cputime) { CPU_time = cputime;}
   void set_memrequired(int memoryrequired) { memory_required = memoryrequired; }

};


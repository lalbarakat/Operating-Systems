#include <header.h>
#include <vector>
#include <task.h>

class Job
{
  private :
    int job_id;
    std::vector <std::list<task> > adlist;

  public :
    Job()
    {
    }
    //constructor
    Job(int jobid, std::vector <std::list<task> > &graph)
    {
      job_id = jobid;
      adlist = graph;
    }
};

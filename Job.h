#ifndef JOB_H
#define JOB_H

#include<stdio.h>
#include<iostream>
#include<list>

#include <vector>
#include "Task.h"

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
#endif

#include<stdio.h>
#include "header.h"
#include<iostream>
#include<vector>
#include<list>

int main()
{
  
  Job_Generator *job_gen = new Job_Generator();
  task *t0 = new task(1, 50,100);
  task *t2 = new task(2, 20,500);
  task *t3 = new task(3, 40,200);
  task *t4 = new task(4, 90,800);
  task *t1 = new task(5, 10,80);
  std::vector <std::list<task> > adlist(5);
  
  adlist[0].push_back(*t1);
  adlist[0].push_back(*t2);  
  adlist[1].push_back(*t0);
  adlist[1].push_back(*t3);
  adlist[1].push_back(*t2);
  adlist[2].push_back(*t3);
  adlist[2].push_back(*t4);
  adlist[3].push_back(*t4);      
  adlist[4].push_back(*t1);        
  adlist[4].push_back(*t0);        

  job_gen->genereate_jobs(adlist);
  
  return 0;
}

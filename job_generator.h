#include<header.h>
class Job_Generator : public communication
{
  std::vector<Job> list_jobs;

  public:
    void genereate_jobs(std::vector <std::list<task> > &Graph)
    {
      Job *job_obj = new Job(1,Graph);
      list_jobs.push_back(*job_obj);
    }

    void print_jobs()
    {
       std::vector<Job>::iterator itr;
      for(itr=list_jobs.begin();itr!=list_jobs.end();itr++)
      {
        Job *job = *itr;
        cout<< "job id" << job->job_id;
        cout<<"Graph";
      }
    }

    void DFS(int el,std::vector <std::list<task> > &adlist,int visited[])
    {
      cout<<"  element is  "<<el;
      std::list<task> listt = adlist[el];
      for(std::list<task>::iterator k = listt.begin();k!=listt.end();k++)
      {
        if(visited[*k]==0)
        {
          visited[*k] = 1;
          DFS(*k,adlist,visited);
        }
      }
    }
};


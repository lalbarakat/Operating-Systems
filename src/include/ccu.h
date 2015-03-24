#ifndef CCU_H
#define CCU_H

#include "communication.h"
#include "node.h"
#include "task.h"
#include <vector>

class CCU : communication
{
  private:
    std::vector<std::vector<int>> wait_time_matrix;
    std::vector <Node*> node_list;
  public:
    CCU(const std::vector <Node*>& _node_list){
      node_list(_node_list);
      construct_matrix();
    }
    int apply_matrix(Task t);
    void construct_matrix();
    void update_matrix();
};

#endif

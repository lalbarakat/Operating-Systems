#include "header.h"
#include <vector>

class CCU : communication
{
  private:
    std::vector<std::vector<int>> wait_time_matrix;
    std::vector <Node*> node_list;
  public:
    int apply_matrix(Task t);
    void update_matrix();
};


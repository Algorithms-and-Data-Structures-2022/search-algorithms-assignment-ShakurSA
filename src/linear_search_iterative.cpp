#include "assignment/linear_search_iterative.hpp"

namespace assignment {

  std::optional<int> LinearSearchIterative::Search(const std::vector<int>& data, int search_elem) const {
    for (int i = 0; i<data.size(); i++){
      if (data[i] == search_elem){
        return i;
      }
    }
    // Tips: итеративно пройдитесь по элементам массива

    return std::nullopt;
  }

}  // namespace assignment
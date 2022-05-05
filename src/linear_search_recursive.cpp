#include "assignment/linear_search_recursive.hpp"

namespace assignment {

  std::optional<int> LinearSearchRecursive::Search(const std::vector<int>& data, int search_elem) const {
    // запускаем рекурсивный метод с индексом последнего элемента массива
    return recursive_helper(data, search_elem, static_cast<int>(data.size() - 1));
  }

  std::optional<int> LinearSearchRecursive::search(const std::vector<int>& data, int search_elem, int curr_index) const {
    if(curr_index < 0){
      return std::nullopt;
    }
    if (data[curr_index] == search_elem){
      return curr_index;
    }
    curr_index--;
    return recursive_helper(data, search_elem, curr_index);

    // Tips:
    // 1. Укажите случаи выхода из рекурсии: (а) обошли все элементы и (б) элемент найден.
    // 2. Вызовите рекурсивный метод с другим индексом.

    return std::nullopt;
  }

}  // namespace assignment
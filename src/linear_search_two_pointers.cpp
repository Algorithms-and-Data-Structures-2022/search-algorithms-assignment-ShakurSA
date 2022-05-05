#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& data, int search_elem) const {
    int left = 0, right = static_cast<int>(data.size() - 1);
    while (left <= right) {
      if (data[left] == search_elem) {
        return left;
      }
      if (data[right] == search_elem) {
        return right;
      }
      right--;
      left++;
    }
    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.

    return std::nullopt;
  }

}  // namespace assignment
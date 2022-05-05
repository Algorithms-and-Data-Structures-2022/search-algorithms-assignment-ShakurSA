//
// Created by ramil on 14.04.2022.
//

#include "assignment/binary_search_recursive.hpp"

namespace assignment {

  std::optional<int> BinarySearchRecursive::Search(const std::vector<int>& data, int search_element) const {
    // запускаем рекурсивный метод с границами поиска от начала массива до конца
    return search(data, search_element, 0, static_cast<int>(data.size() - 1));
  }

  std::optional<int> BinarySearchRecursive::search(const std::vector<int>& arr, int search_elem, int start, int stop) const {

    if (stop - start<= 1) {
      if (stop < start) {
        return std::nullopt;
      }
      if (arr[start] == search_elem) {
        return start;
      }
      if (arr[stop] == search_elem) {
        return stop;
      }
      return std::nullopt;
    }
    int m = (start + stop) / 2;
    if (arr[m] < search_elem) {
      return search(arr, search_elem, m, stop);
    } else {
      return search(arr, search_elem, start, m);
    }
    // Tips:
    // 1. Рассмотрите базовые случаи выхода и рекурсии:
    //    1) индекс левого элемента стал больше индекса правого элемента
    //    2) целевой элемент найден
    // 2. Вызовите рекурсивный метод, изменив границы поиска
    //    в зависимости от неравенства между элементом посередине и целевого элемента

    return std::nullopt;
  }

}  // namespace assignment

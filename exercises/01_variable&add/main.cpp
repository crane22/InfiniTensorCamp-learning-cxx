#include "../exercise.h"

// READ: 运算符 <https://zh.cppreference.com/w/cpp/language/expressions#.E8.BF.90.E7.AE.97.E7.AC.A6>

int main(int argc, char **argv) {
    // TODO: 补全变量定义并打印加法运算
    // x ?
    int x = 114;
    std::cout << x << " + " << x << " = " << x + x << std::endl;
    return 0;
}

// #include <iostream>
// #include <array>
// #include <type_traits>
// #include <utility>

// template<typename... Ts>
// constexpr auto make_array(Ts&&... ts) {
//     using CT = std::common_type_t<Ts...>;
//     return std::array<CT, sizeof...(Ts)>{std::forward<CT>(ts)...};
// }

// int main() {
//     std::array<double, 4ul> arr = make_array(1, 1.14f, 5.14, '*');
//     std::cout << "arr = {";
//     for(auto s{arr.size()}; double elem: arr) {
//         std::cout << elem << (--s ? "," : " ");
//     }
//     std::cout << "}\n";
// }
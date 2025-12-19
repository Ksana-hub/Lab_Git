#pragma once
#include <vector>
#include <string>

namespace BinaryIO {
    std::vector<char> serializeInt(int value);
    int deserializeInt(const std::vector<char>& data);
}

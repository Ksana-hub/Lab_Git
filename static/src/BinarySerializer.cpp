#include "BinarySerializer.h"
#include <cstring>

namespace BinaryIO {

    std::vector<char> serializeInt(int value) {
        std::vector<char> data(sizeof(int) + 1); // версия A
        std::memcpy(data.data(), &value, sizeof(int));
        return data;
    }


int deserializeInt(const std::vector<char>& data) {
    int value;
    std::memcpy(&value, data.data(), sizeof(int));
    return value;
}

}

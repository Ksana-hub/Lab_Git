#include "BinaryFileHandler.h"
#include <fstream>

namespace BinaryIO {

void BinaryFileHandler::writeToFile(const std::string& filename, const std::vector<char>& data) {
    std::ofstream file(filename, std::ios::binary);
    file.write(data.data(), data.size());
}

std::vector<char> BinaryFileHandler::readFromFile(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);
    file.seekg(0, std::ios::end);
    size_t size = file.tellg();
    file.seekg(0, std::ios::beg);
    std::vector<char> data(size);
    file.read(data.data(), size);
    return data;
}

std::size_t BinaryFileHandler::getFileSize(const std::string& filename) {
    return std::filesystem::file_size(filename);
}

}

#pragma once
#include <vector>
#include <string>

class BinaryFileHandler {
public:
    void writeToFile(const std::string& filename,
                     const std::vector<char>& data);

    std::vector<char> readFromFile(const std::string& filename);

    std::size_t getFileSize(const std::string& filename);
};
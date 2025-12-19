#include <iostream>
#include "BinarySerializer.h"
#include "BinaryFileHandler.h"

using namespace BinaryIO;

int main() {
    BinaryFileHandler handler;

    // Сериализация числа
    auto data = serializeInt(123);

    // Запись в файл
    handler.writeToFile("test.bin", data);

    // Чтение из файла
    auto loaded = handler.readFromFile("test.bin");
    int value = deserializeInt(loaded);

    std::cout << "Загруженное значение: " << value << std::endl;
    return 0;
}

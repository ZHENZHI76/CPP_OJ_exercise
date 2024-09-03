#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    std::string filename;

    std::cout << "请输入文件名（不需要输入.cpp后缀）: ";
    std::cin >> filename;
    filename += ".cpp";

    std::ifstream file(filename);
    if (!file) {
        char choice;
        std::cout << "文件不存在。你想要创建这个文件吗？ (y/n): ";
        std::cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            std::ofstream newFile(filename);
            if (!newFile) {
                std::cerr << "文件创建失败!" << std::endl;
                return 1;
            }
            std::cout << "文件创建成功!" << std::endl;
            newFile.close();
        }
    } else {
        file.close();
    }

    // 使用VSCode打开文件
    std::string openCommand = "code-insiders " + filename;
    system(openCommand.c_str());

    // 这里我们假设你已经配置了Code Runner，并且它会在打开文件后自动运行。
    // 如果不是这样，你可能需要手动启动Code Runner。

    return 0;
}


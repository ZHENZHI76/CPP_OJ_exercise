#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    std::string filename;

    while (true) { // 无限循环
        std::cout << "请输入文件名（不需要输入.cpp后缀，或输入'exit'退出）: ";
        std::cin >> filename;

        if (filename == "exit") break; // 如果用户输入exit则退出程序

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
                    continue; // 跳回到循环的开始
                }
                std::cout << "文件创建成功!" << std::endl;
                newFile.close();
            }
        } else {
            file.close();

            char choice;
            std::cout << "你想要 (r)运行 或 (rm)删除 文件？ ";
            std::cin >> choice;

            if (choice == 'r') {
                // 使用DevC++打开文件
                std::string openCommand = "devcpp " + filename; // 确保devcpp在环境变量中，如果不在环境变量中，可以使用绝对路径
                system(openCommand.c_str());
            } else if (choice == 'rm') {
                char confirmDelete;
                std::cout << "你确定要删除这个文件吗？ (y/n): ";
                std::cin >> confirmDelete;
                if (confirmDelete == 'y' || confirmDelete == 'Y') {
                    if (std::remove(filename.c_str()) == 0) {
                        std::cout << "文件已成功删除." << std::endl;
                    } else {
                        std::cerr << "文件删除失败!" << std::endl;
                    }
                }
            }
        }
    }
    return 0;
}

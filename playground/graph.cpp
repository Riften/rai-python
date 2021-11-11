//
// Created by yongxi on 2021/11/1.
//

#include "Core/graph.h"
#include "Core/util.h"
#include <iostream>

const std::string model_dir = "/home/yongxi/Workspace/rai-python/rai-robotModels";
const std::string curr_dir = "/home/yongxi/Workspace/rai-python/playground";

int main() {

    std::string model_path = model_dir + "/pr2/pr2.g";
    rai::FileToken file_token(model_path.c_str(), true);
    rai::Graph G(file_token);
    for (auto node : G.list()) {
        // node->getValue<>()
    }
    return 0;
}
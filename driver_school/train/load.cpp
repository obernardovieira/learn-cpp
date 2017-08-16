#include <iostream>
#include <fstream>
#include "../json/json.hpp"
#include "load.h"

using nlohmann::json;

json load()
{
    std::ifstream ifs("data.json");
    json j = json::parse(ifs);
    return j;
}
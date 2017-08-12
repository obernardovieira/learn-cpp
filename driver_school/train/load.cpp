#include <iostream>
#include <fstream>
#include "../json/json.hpp"
#include "load.h"

using nlohmann::json;

json load()
{
    std::ifstream i("data.json");
    json j;
    i >> j;
    return j;
}
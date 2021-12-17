#include <iostream>
#include <cpr/cpr.h>

int main() {
    cpr::Response res = cpr::Get(cpr::Url("http://10.8.0.6:2121/28.B8A8AA060000/"));
    std::cout << res.text << std::endl;
    size_t pos = res.text.find("temperature9");
    std::string temperature = res.text.substr(pos+25,5);
    int t = std::stoi(temperature);
    std::cout << temperature << std::endl;
    std::cout << t << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

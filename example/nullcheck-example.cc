#include "opendot/nullcheck/nullcheck.hpp"

using namespace opendot::utility;

class entity {};

int main(int argc, char const *argv[]) {
    
    entity* e = nullptr;
    nullcheck::isnull(e);

    return 0;
}

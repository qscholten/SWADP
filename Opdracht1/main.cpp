#include "positie.h"
#include "robot.h"

int main() {
    Positie P(5, 10);
    Robot R(&P);
    R.run();
    R.show();

    return 0;
}
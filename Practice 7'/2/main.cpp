#include "Equations.h"

int main() {
    Type1Equation equation1;
    equation1.show();
    equation1.Get_answer();

    Type2Equation equation2(5);
    equation2.show();
    equation2.Get_answer();

    return 0;
}
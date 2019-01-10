#include <iostream>
//导入optional所在的头文件

class A
{
    public:
        struct st
        {
            int a = 10;
            int b = 20;
        };
};

int main()
{
    optional<A::st> op;
    op = A::st();
    std::cout << op->a << std::endl;
    return 0;
}

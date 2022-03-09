#include <iostream>
using namespace std;

class dominoshka {
public:
    int left_border;
    int rigth_border;
    void put(dominoshka d, int location, dominoshka &left, dominoshka &rigth) { ///left и rigth - переменные, хранящие текущую крайнюю левую и крайнюю правую доминошку соответственно
        if (location == 0) {
            if (d.rigth_border == left.left_border) {
                left.rigth_border = d.rigth_border;
                left.left_border = d.left_border;
            }
            else {
                left.rigth_border = d.left_border;
                left.left_border = d.rigth_border;
            }
        }
        else {
            if (d.left_border == rigth.rigth_border) {
                rigth.rigth_border = d.rigth_border;
                rigth.left_border = d.left_border;
            }
            else {
                rigth.rigth_border = d.left_border;
                rigth.left_border = d.rigth_border;
            }
        }
    }
};


int main()
{
    dominoshka left = {};
    dominoshka rigth = {};
	return 0;
}
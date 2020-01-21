#include <iostream>
#include <iomanip>
using namespace std;

/*
 - char เก็บข้อมูลเป็น interger ได้เหมือน int เเต่มีเเค่ 8 bits
 - float จะ error เสมอจากการปัด ควรจะบอกหลักที่ใ้ช้ในการตัดสิน

*/
int main() {
    int x = 0; //32-bit
    char y = 'A'; //8-bits

    float f = 88.888888888; //32-bits
    double g = 259339394904; //64-bits

    cout << fixed << showpoint;
    cout << setprecision(2);
    cout << f << endl;
    
    return 0;
}
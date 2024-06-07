#include <iostream>
#include "MinCalculator.h"

int main() {

	using namespace std;

    MinCalculator<int> intCalc;//int�^�̃C���X�^���X���쐬
    MinCalculator<float> floatCalc;//float�^�̃C���X�^���X���쐬
    MinCalculator<double> doubleCalc;//double�^�̃C���X�^���X���쐬
    MinCalculator<int> intFloatCalc;// int�^��float�^�̑g�ݍ��킹
    MinCalculator<int> intDoubleCalc;// int�^��double�^�̑g�ݍ��킹
    MinCalculator<float> floatDoubleCalc;// float�^��double�^�̑g�ݍ��킹

    cout << "Min of 114 and 514 (int): " << intCalc.Min(114, 514) << endl;//Min�֐����Ăяo��
    cout << "Min of 11.4f and 51.4f (float): " << floatCalc.Min(11.4f, 51.4f) << endl;
    cout << "Min of 1.14 and 5.14 (double): " << doubleCalc.Min(1.14, 5.14) << endl;
    cout << "Min of 114 and 11.4f (int-float): " << intFloatCalc.Min(114, 11.4f) << endl;
    cout << "Min of 114 and 1.14 (int-double): " << intDoubleCalc.Min(114, 1.14) << endl;
    cout << "Min of 11.4f and 1.14 (float-double): " << floatDoubleCalc.Min(11.4f, 1.14) << endl;

    return 0;

}
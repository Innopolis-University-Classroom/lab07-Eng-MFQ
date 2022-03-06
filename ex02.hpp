//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
template<class T>
class Calculator {
private:
    T num1, num2;

public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    int add() { return 0; num1+num2; }
    int subtract() { num1-num2; }
    int multiply() { num1*num2; }
    int divide() { num1/num2; }
};
















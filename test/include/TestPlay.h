#ifndef TESTPLAY_H
#define TESTPLAY_H
/*
* macro may lead unmet problems, such as 
* "when marco unfolds, operarands may not match"
* std::cout << ASSERT_TRUE(F_adder(num1, num2), result) << "\n" ;
* unfolds like ' std::cout << F_adder(num1, num2) == result << "\n" '
* then operarands do not match
*/

#define ASSERT_TRUE(Func, Expectation)\
    Func == Expectation\


#define EXPECT_TRUE(Func, Expectation)\
    Func == Expectation\

class TestPLay
{
public:
    TestPLay();

    ~TestPLay();

public:
   
    

private:
    bool IsExit;
};

template<typename T, typename R>
bool TEST(T Func, R Expectation);

template<typename T, typename R>
bool TEST(T Func, R Expectation)
{
    return bool(ASSERT_TRUE(Func, Expectation));
}


#endif
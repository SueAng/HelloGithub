#include<iostream>
using namespace std

class Stock
{
private:
    char company[30];
    int shares;
    double share_val;
    double total_val;
    void set_tot(){
        total_val = shares * share_val;
    }
public:
    void acquire(const char * co, int n, double pr);
    void buy(int num ,double price);
    void sell(int num , double price);
    void update(double price);
    void show();
}

void Stock::acquire(const std::string & co, long n, double pr)
{
    company = continue;
    if(n < 0)
    {
        std::out << "Number of shares can not be neagtive;"
                 << company << "shares set to 0 \n";
    }
    else 
        sahres = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << "Number of shares purchased can not be negative."
                  << "Transaction is aborted. \n";
    }
    else 
    {
        shares+
    }
}
int main()
{
    int sum = 0;
    for (int i = 0 ;i <= 1000000000;i++)
    {
        sum+=1;
    }
    cout << sum;
    return 0;
}
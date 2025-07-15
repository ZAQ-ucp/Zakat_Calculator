#include <iostream>
using namespace std;


void input();
void calculation(float a, float b, float c, float d, float e, float f, float g, float x, float y, float z, float gg);

int main(){
    cout << "                ----------------------------------------------------------------" << endl;
    cout << "                        ^^^^^^^^^^^^^^^^^ZAKAT CALCULATOR^^^^^^^^^^^^^^^^^" << endl;
    cout << "                ----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "                               Nisab threshold" << endl;
    cout << "           ---->   Value of Gold(approximately PKR 2, 250, 000.00)" << endl;
    cout << "           ---->   Value of Silver(approximately PKR 175, 000.00)" << endl;
    cout << "           ---->   Calculation Will be in PKR" << endl;
    input();

    return 0;
}


void input() {
    float cash_in_hand = 0, cash_for_future_purpose = 0, cash_given_as_loans = 0, investments_shares = 0,
        gold_value = 0, silver_value = 0, stock_value = 0, borrowed_money = 0, employee_wages_due = 0, immediate_bills_due = 0,
        goldprice = 0;

    cout << endl;
    cout << endl;
    cout << "-------------CASH----------" << endl;
    cout << "Cash in hand & in bank accounts: ";
    cin >> cash_in_hand;
    cout << "Cash deposited for some future purpose, e.g. Hajj: ";
    cin >> cash_for_future_purpose;
    cout << "Cash given out in loans: ";
    cin >> cash_given_as_loans;
    cout << "Investments, shares, saving certificates, pensions funded by money in one’s possession: ";
    cin >> investments_shares;
    cout << endl;
    cout << "---------Gold and Silver------" << endl;
    cout << "Value of Gold that you possess: ";
    cin >> gold_value;
    cout << "Value of Silver that you possess: ";
    cin >> silver_value;
    cout << endl;
    cout << "---------Trade Goods---------" << endl;
    cout << "Value of stock: ";
    cin >> stock_value;
    cout << endl;
    cout << "---------Liabilities----------" << endl;
    cout << "Borrowed money, goods bought on credit: ";
    cin >> borrowed_money;
    cout << "Wages due to employees: ";
    cin >> employee_wages_due;
    cout << "Taxes, Rent, utility bills due immediately: ";
    cin >> immediate_bills_due;
    cout << endl;
    cout << "Enter the gold amount per gram in your city:";
    cin >> goldprice;

    calculation(cash_in_hand ,cash_for_future_purpose ,cash_given_as_loans ,investments_shares,
        gold_value ,silver_value ,stock_value ,borrowed_money,employee_wages_due,immediate_bills_due,goldprice);
}

void calculation(float a, float b, float c, float d, float e, float f, float g, float x, float y, float z, float gg) {
    double totalassest = 0, totalliabilities = 0, netassets = 0, totalgoldamount = 0, zakat = 0, rem = 0;

    totalassest = a + b + c + d + e + f + g;
    totalliabilities = x + y + z;
    netassets = totalassest - totalliabilities;
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Your Total Net Worth: " << netassets << endl;

    totalgoldamount = gg * 87.48;

    if (netassets >= totalgoldamount) {
        zakat = netassets * 0.025;
        cout << "Zakat Payable: " << zakat << endl;
        rem = netassets - zakat;
        cout << "Remaining Net Worth After Paying Zakat: " << rem << endl;
    }
    else {
        cout << "Zakat is Not Farz On You" << endl;
    }
}

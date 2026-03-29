#include<iostream> 
#include<string>
using namespace std;
 int main()
{
    //--1. Daily sales of a week ----------------------
    cout << "===========================================\n";
    cout <<"|      BUSINESS DATA MANAGER                |\n";
    cout<<"===============================================\n";
    string empNames;
    int empSlaries;
    string days[7] = {"mon", "tue" , "wed", "thu", "fri", "sat", "sun" };
    double dailySales[7];
double totalSales = 0,  avgSales = 0, maxSale = 0 ;
  int totalSalary;
  int cheapest;

cout <<"\n ------ 1. Daily Sales (This Week) ------ \n";
for(int i = 0 ; i < 7 ; i++){
    cout << "Enter sales for "<< days[i] << " : $";
    cin >> dailySales[i];
    totalSales += dailySales[i];
    if ( dailySales[i] > maxSale ) {
         maxSale = dailySales[i];}
         avgSales = totalSales / 7;

         cout << "\n Day      Sales\n";
         cout << "-------------------- \n";
          for (int i = 0; i < 7; i++)
          {
            cout << " " << days[i] << "           $" << dailySales[i] << "\n";
            cout << "---------------------- \n";
            cout << "Total :     $" << totalSales << "\n";
            cout << "Averaga :   $" << avgSales   << "\n";
            cout << " Best Day : $" << maxSale    << "\n";
          }
          //-------2. employee salaries -----------------------------------
          cout << "\n -----2. Employee " << i + 1 << "Salary :  $";
          cin >> ws;
          (cin, empNames[i]);
          cout << "Employee " << i+1 << "Salary :  $";
          cin >> empSalaries[i];
           int totalSalary ++ = empSalaries[i];

           cout << "\n Employee      Salary\n";
           cout  << "----------------------- \n";
           for (int i = 0 ; i < 5; i++)
                cout << "  " << empNames[i] << "       $" << empSlaries[i] << "\n";
                  cout << "  ───────────────────────\n";
    cout << "  Total Payroll: $" << totalSalary << "\n";


     // ─── 3. Product Prices ──────────────────────────────────────────
    cout << "\n── 3. Product Prices ──\n";

    string productNames[4];
    double productPrices[4];
    double minPrice = -1;
    string cheapest;

    for (int i = 0; i < 4; i++) {
          cout << "  Product " << i + 1 << " Name:  ";
        cin  >> ws;
        getline(cin, productNames[i]);
        cout << "  Product " << i + 1 << " Price: $";
        cin  >> productPrices[i];

        if (minPrice < 0 || productPrices[i] < minPrice) {
            minPrice  = productPrices[i];
            cheapest  = productNames[i];
        }
    }
    cout << "\n  Product     Price\n";
    cout << "--------------------- \n";
    for (int i = 0; i< 4; i++)
       cout << "   " << productNames[i] << "  $" << productPrices[i] << "\n";
         cout << "  ───────────────────────\n";
    cout << "  Cheapest: " << cheapest << " @ $" << minPrice << "\n";
    //------4.Customer IDs --------------------------------------------------
cout << "\n ----4. Customer IDs --------\n";

int customerIDS[5];
for (int i = 0; i< 5; i++){
    cout << "  Enter Customer " << i + 1 << "ID: ";
    cin >> customerIDS[i];
}
int searchID;
cout << " \n  Enter ID  to search :  ";
cin >> searchID;
bool found = false ;
for (int i = 0; i < 5; i++)
   if(customerIDS[i] == searchID ){
    cout << " CORRECT CUSTOMER ID " << searchID <<"found at record " << i + 1 << ".\n";
    found = true;
   }
}
else {
cout << " WRONG CUSTOMER  ID " << searchID << "not found . \n";
}
int minPrice;
 // ─── Final Summary ──────────────────────────────────────────────
    cout << "\n╔══════════════════════════════════════╗\n";
    cout << "║            BUSINESS SUMMARY           ║\n";
    cout << "╠══════════════════════════════════════╣\n";
    cout << "║  Weekly Sales Total:  $" << totalSales  << "\n";
    cout << "║  Weekly Sales Avg:    $" << avgSales    << "\n";
    cout << "║  Total Payroll:       $" << totalSalary << "\n";
      cout << "║  Total Payroll:       $" << totalSalary << "\n";
    cout << "║  Cheapest Product:    "  <<cheapest     << " @ $" <<   minPrice << "\n";
    cout << "╚══════════════════════════════════════╝\n";

    return 0;
}

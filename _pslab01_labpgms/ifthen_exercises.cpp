//====================================================================
//====================================================================
#include <iostream>
#include <string>
using namespace std;

int main() {

    //====================================================================
    //For all of the following:
    //Declare variables including: type, meaningful_names, initial_values.
    //and create expressions using relational and logical operators.
    //Include some label or description when printing values.
    //====================================================================
    printf("\n#1. Is the current month February?\n");
	int month = 2;
	if (month == 2) {
		printf("\nMonth = %d, it is February\n", month);
	}
	
    printf("\n#2. Check if a letter is M or m.\n");
	char letter = 'M';
	if (letter == 'M' || letter =='m') {
		printf("\nLetter = %c\n", letter);
	}
    printf("\n#3. Is the temperature greater than 32 degrees and the barometric pressure\n");
    printf("    above 30.1 inches. Is the barometric pressure rising or falling?\n");
	
	int temp = 80;
	double pressure = 30.5;
	bool is_rising = true;
	
	if (temp > 32 && pressure > 30.1){
		printf("\nTemp = %d, Pressure = %4.2f \n", temp, pressure);
		printf("Temp is above 32 and Pressure is above 30.1\n");
	}
	if (is_rising){
		printf("\nThe pressure is rising\n");
	}
	else {
		printf("\nThe pressure is falling\n");
	}
	
	printf("\n#4. Is an angle greater than 90 degrees and less than or equal to 180.\n");
	double angle = 100;
	if (angle > 90 && angle <= 180){
		printf("\nAngle = %d is in range (90,180]\n", angle);
	}
	else {
		printf("\nAngle = %d is not in range (90,180]\n", angle);
	}
	
    printf("\n#5. Is the tax_rate over 25%% and income less than $20000.\n");
	double tax_rate = .30;
	double income = 18000;
	if (tax_rate > .30 && income < 20000);{
		printf("\nYes: tax_rate=%4.2f, income=%7.2f\n", tax_rate, income);
	}
	
		
    //====================================================================
    //Create and initialize variables:
    //  a. number of customers
    //  b. balance owed
    //  c. customer last name
    //  d. age
    //  e. zip code
    //  f. credit allowed, true or false
    //====================================================================
	int num_customers = 120;
	double bal_owed = 50.00;
	string cust_name = "Larry";
	int age = 39;
	int zip = 21252;
	bool cred_allow = true;
	
    printf("\n#6. If balance owed is more than $500, print to pay immediately.\n");
	if (bal_owed > 500){
		printf("\nbal_owed = %4.2fPay immediately\n", bal_owed);
	}
	else {
		printf("\nbal_owed = %4.2f Pay monthly charges\n", bal_owed);
	}
	
    printf("\n#7. If balance owed is more than $1000, set credit allowed to false.\n");
	bal_owed = 2000;
	if (bal_owed > 1000){
		cred_allow = false;
		printf("\n bal_owed = %4.2f, cred_allow = %d\n", bal_owed, cred_allow);
	}
	
    printf("\n#8. If number of customers exceeds 100, print ""time to hire"".\n");
	if (num_customers > 100){
		printf("\n num_customers = %d, Time to hire\n", num_customers);
	}
	
    printf("\n#9. If balance owed less than $100 and credit is allowed, display customer last name.\n");
	bal_owed = 50.00;
	cred_allow = true;
	if (bal_owed < 100 && cred_allow){
		printf("\ncust_name = %s \n", cust_name.c_str());
	}
	
    printf("\n#10. Is customer name ""Larry"" or ""larry"" and local to Towson: zip codes 21204 or 21252.\n");
	if ( (cust_name == "Larry" || cust_name == "larry") && (zip == 21204 || zip == 21252)){
		printf("\n cust_name = %s, %s is local to Towson\n", cust_name.c_str(), cust_name.c_str());
	}
	else {
		printf("Not local or not named Larry");
	}


    //====================================================================
    //write the code for the following:
    //====================================================================
    printf("\n#11. Movie prices: 12 and under $5, seniors 55 and older $6, all others $10\n");
	age = 70;
	if (age >= 55){
		printf("\n Age = %d , Pay $6\n", age);
	}
	else if (age <= 12){
		printf("\n Age = %d , Pay $5\n", age);
	}
	else {
		printf("\n Age = %d , Pay $10\n", age);
	}
	
    printf("\n#12. Student credits: print student class freshman, sophomore, junior, senior.\n");
	int num_credits = 59;
	if (num_credits >= 0 && num_credits < 30){
		printf("\n num_credits = %d, Freshman\n", num_credits);
	}
	else if (num_credits < 60){
		printf("\n num_credits = %d, Sophomore\n", num_credits);
	}
	else if (num_credits < 90){
		printf("\n num_credits = %d, Junior\n", num_credits);
	}
	else {
		printf("\n num_credits = %d, Senior\n", num_credits);
	}
	
    printf("\n#13. Temperature: between 80 and 100 inclusive go for a swim, greater or equal 60\n");
    printf("     and less than 80 play golf, less than 60 eat, greater than 100 nap.\n");
	
	//Might be on test

	temp = 101;
	if (temp < 60){
		printf("\n temp = %d, Go eat\n", temp);
	}
	else if (temp < 80){
		printf("\n temp = %d, Go Golf\n", temp);
	}
	else if (temp <= 100){
		printf("\n temp = %d, Go Swim\n", temp);
	}
	else {
		printf("\n temp = %d, Go nap\n", temp);
	}
    printf("\n#14. Declare year and rewrite the following sequence of ifs as single if-else.\n");
    //if (year % 4 == 0) { printf( "%d is a leap year.\n", year); }
    //if (year % 4 != 0) { printf( "%d is not a leap year.\n", year); }
	
	int year = 2000;
	if (year % 4 != 0 ){
		printf("\n%d is not a leap year\n", year);
	}
	else {
		printf("\n%d is a leap year\n", year);
	}
	
    printf("\n#15. What is the output of the following code and should it be written differently?\n");
    int q=6, r=7, s=1;
    if (q < r) {
        if (s > 0)
            printf("\tokay...\n");
    }
    else
        printf("\tnot...\n");
	printf("The output of the code is 'okay...\nIt should be written differently because there are cases where it is not true");
	
    printf("\n#16. Define 3 integer values, store the largest value in max (without the max function)\n");
	int a = 9, b = 7, c = 10;
	int max = a;
	if ( a > b ){
		if ( a > c ){
			printf("\n Max = %d\n", max);
		}
		else {
			max = c;
			printf("\n Max = %d\n", max);
		}
	}
	else if ( b > c ){
		max = b;
		printf("\n Max = %d\n", max);
	}
	else {
		max = c;
		printf("\n Max = %d\n", max);
	}
	
	//max = a
	//if b>max
	//	b=max
	//if c>max
	//	c=max
	
    printf("\n#17. Input the weight of a sack of grain. Check the weight of the first sack of grain and\n");
    printf("     start the count for weights below 5 lbs and weights above 5 lbs.\n");
	
	double weight_sack;
	printf("Enter the weight of a sack of grain");
	cin >> weight_sack;
	int sack_below = 0, sack_above = 0;
	
	if (weight_sack < 5){
		sack_below += 1;
	}
	else if (weight_sack > 5){
		sack_above += 1;
	}
	else {
		printf("Sack is 5 pounds");
	}
	printf("\nsack_below = %d, sack_above = %d\n", sack_below, sack_above);
	

    printf("\n#18. Input the price of an item and a discount rate, calculate the discount and the\n");
    printf("     final price, then display the final price. Comment the IPO sections of the code.\n");
	double price_item;
	double disc_rate;
	double total_discount;
	double final_price;
	
	printf("Input the price of an item: ");
	cin >> price_item;
	printf("input the discount rate: ");
	cin >> disc_rate;
	
	if (price_item > 0 && disc_rate > 0) {
		total_discount = price_item * disc_rate;
		final_price = price_item - total_discount;
		printf("\nThe final price is %4.2f \n", final_price);
	}
	else {
		printf("Invalid");
	}
	
	

    printf("\n#19. Print a menu of options a. soda, b. coffee, c. beer. Input a letter selection\n");
    printf("     from the user allowing for upper or lowercase, print the selection or ""invalid item"".\n");
	char selection;
	printf("\nOptions:\na. soda\nb. coffee\nc. beer\nPlease enter your letter selection: ");
	cin >> selection;
	//selection = tolower(selection);
	
	if (selection == 'a' || selection == 'A'){
		printf("\nYou selected: soda\n");
	}
	else if (selection == 'b' || selection =='B'){
		printf("\nYou selected: coffee\n");
	}
	else if (selection == 'c' || selection == 'C'){
		printf("\nYou selected: beer\n");
	}
	else {
		printf("\n%c is Invalid\n", selection);
	}


    printf("\n#20. Define two numbers and input an integer code (variables num1, num2, code)\n");
    printf("     If the code is 1: print the sum, 2: the difference num1 - num2, 3: the product,\n");
    printf("     4: division num1 / num2 if num2 is not 0, else display an error message.\n");
    printf("     Display the two numbers, the code, the expression, and the result.\n");
	
	double num1 = 5;
	double num2 = 10;
	int code;
	printf("\nEnter a code, 1-4: ");
	cin >> code;
	
	if (code == 1){
		printf("\nThe result is %4.2f", num1 + num2);
	}
	else if (code == 2){
		printf("\nThe result is %4.2f", num1 - num2);
	}
	else if (code == 3){
		printf("\nThe result is %4.2f", num1 * num2);
	}
	else if (code == 4){
		printf("\nThe result is %4.2f", num1 / num2);
	}
	else {
		printf("Invalid");
	}

    printf("\n#21. Is the following C++ statement an equation or assignment statement?\n");
    int y, m, x, b1;
    y = m * x + b1;
	printf("The statement is an assignment statement");
    return 0;
}

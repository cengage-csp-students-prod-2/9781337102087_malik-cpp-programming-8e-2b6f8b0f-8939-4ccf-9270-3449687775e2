Design and implement the stock object. Call the class that captures the various characteristics of a stock object `stockType`.

The main components of a stock are the stock symbol, stock price, and number of shares. Moreover, we need to output the opening price, closing price, high price, low price, previous price, and the percent gain/loss for the day. These are also all the characteristics of a stock. Therefore, the stock object should store all this information.

Perform the following operations on each stock object:

1. Set the stock information.
2. Print the stock information.
3. Show the different prices.
4. Calculate and print the percent gain/loss.
5. Show the number of shares.

- The natural ordering of the stock list is by stock symbol. Overload the relational operators to compare two stock objects by their symbols.
- Overload the insertion operator, `<<`, for easy output.
- Because the data is stored in a file, overload the stream extraction operator, `>>`, for easy input.

For example, suppose `infile` is an `ifstream` object and the input file was opened using the object `infile`. Further suppose that `myStock` is a stock object. Then, the statement

     infile >> myStock;

reads the data from the input file and stores it in the object `myStock`. (Note that this statement reads and stores the data in the relevant components of `myStock`.)

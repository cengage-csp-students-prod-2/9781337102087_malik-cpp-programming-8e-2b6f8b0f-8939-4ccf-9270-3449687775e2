Now that you have designed and implemented the `class` `stockType` to implement a stock object in a program, it is time to create a list of stock objects.

Let us call the class to implement a list of stock objects `stockListType`.

The `class` `stockListType` must be derived from the `class` `listType`, which you designed and implemented in a previous exercise. However, the `class` `stockListType` is a very specific class, designed to create a list of stock objects. Therefore, the `class` `stockListType` is no longer a template.

Add and/or overwrite the operations of the `class` `listType` to implement the necessary operations on a stock list.

The following statement derives the `class` `stockListType` from the `class` `listType`.

     class stockListType: public listType&lt;stockType&gt;
      {
          member list
      };

The member variables to hold the list elements, the length of the list, and the maximum size of the list were declared as protected in the `class` `listType`. Therefore, these members can be directly accessed in the `class` `stockListType`.

Because the company also requires you to produce the list ordered by the percent gain/loss, you need to sort the stock list by this component. However, you are not to physically sort the list by the component percent gain/loss. Instead, you will provide a logical ordering with respect to this component.

To do so, add a member variable, an array, to hold the indices of the stock list ordered by the component percent gain/loss. Call this `array` `sortIndicesGainLoss`. When printing the list ordered by the component percent gain/loss, use the `array` `sortIndicesGainLoss` to print the list. The elements of the `array` `sortIndicesGainLoss` will tell which component of the stock list to print next.

Write a program that uses these two classes to automate the company’s analysis of stock data.

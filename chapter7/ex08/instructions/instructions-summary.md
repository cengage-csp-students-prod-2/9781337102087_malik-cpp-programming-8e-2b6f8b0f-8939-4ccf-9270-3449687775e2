## Instructions
Write a program that reads in a line consisting of a student’s name, Social Security number, user ID, and password. The program outputs the string in which all the digits of the Social Security number and all the characters in the password are replaced by `x`. (The Social Security number is in the form `000-00-0000`, and the user ID and the password do not contain any spaces. Remove the dashes from the Social Security number in your program output.) 
 
Your program should not use the operator `[]` to access a string element. Use the appropriate functions described in _Table 7-1_ below. 

Expression | Effect
---|---|
strVar.at(index)|Returns the element at the position specified by **index**|
strVar[index]|Returns the element at the position specified by **index**|
strVar.append(n, ch)|Appends **n** copies of **ch** to **strVar**, where **ch** is a **char** variable or a **char** constant|
strVar.append(str)|Appends **str** to **strVar**|
strVar.clear()|Deletes all the characters in **strVar**
strVar.compare(str)|Returns **1** if **strVar** > **str** returns **0** if **strVar** == **str**; returns **−1** if **strVar** < **str**|
strVar.empty()|Returns **true** if **strVar** is empty; otherwise it returns **false**|
strVar.erase()|Deletes all the characters in **strVar**|
strVar.erase(pos, n)|Deletes **n** characters from **strVar** starting at position **pos**|
strVar.find(str)|Returns the index of the first occurrence of **str** in **strVar**. If **str** is not found, the special value **string::npos** is returned|
strVar.find(str, pos)|Returns the index of the first occurrence at or after **pos** where **str** is found in **strVar**|
strVar.find_first_of(str, pos)|Returns the index of the first occurrence of any character of **strVar** in **str**. The search starts at **pos**|
strVar.find_first_not_of(str, pos)|Returns the index of the first occurrence of any character of **str** not in **strVar**. The search starts at **pos**|
strVar.insert(pos, n, ch)|Inserts **n** occurrences of the character **ch** at index **pos** into **strVar**; **pos** and **n** are of type **string::size_type**; and **ch** is a character|
strVar.insert(pos, str)|Inserts all the characters of **str** at index **pos** into **strVar**|
strVar.length()|Returns a value of type **string::size_type** giving the number of characters in **strVar**|
strVar.replace(pos, n, str)|Starting at index **pos**, replaces the next **n** characters of **strVar** with all the characters of **str**. If **n** >  **length** of **strVar**, then all the characters until the end of **strVar** are replaced |
strVar.substr(pos, len)|Returns a **string** which is a substring of **strVar** starting at **pos**. The length of the substring is at most **len** characters. If **len** is too large, it means “to the end“ of the string in **strVar*|
strVar.size()|Returns a value of type **string::size_type** giving the number of characters in **strVar**
strVar.swap(str1)|Swaps the contents of **strVar** and **str1**. **str1** is a **string** variable|


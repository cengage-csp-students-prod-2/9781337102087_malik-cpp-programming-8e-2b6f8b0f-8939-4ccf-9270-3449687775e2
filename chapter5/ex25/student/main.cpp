counter = 0;
infile >> num;
while (infile)
{
    sum = 0;
    while (num != -999)
        {
        sum = sum + num;
        infile >> num;
    }
    counter++;
    cout << "Line " << counter
         << ": Sum = " << sum << endl;
    infile >> num;
}
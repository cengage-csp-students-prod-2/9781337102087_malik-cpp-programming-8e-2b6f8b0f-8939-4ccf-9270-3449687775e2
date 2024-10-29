infile >> ID;
while (infile)
{
    infile.get(ch);
    getline(infile, name);
    sum = 0;
    infile >> num; // read the first number
    while (num != -999)
    {
        sum = sum + num; // update sum
        infile >> num; // read the next number
    }
    cout << "Name: " << name
         << ", Votes: " << sum
         << endl;
    infile >> ID; // begin processing the next line
}
#include <iostream>
#include <fstream>
using namespace std;
int writeFile(string file)
{
    ofstream ofs;
    int N;
    int ID;
    string Ename;
    string Dname;
    double S;

    cin >> N;
    ofs.open(file);
    if (!ofs)
    {
        cout << "File Open Error\n";
        exit(0);
    }
    else
    {
        ofs << N << endl;
    }
    for (size_t i = 0; i < N; i++)
    {
        cin >> ID >> Ename >> Dname >> S;
        if (ofs)
        {
            ofs << ID << " " << Ename << " " << Dname << " " << S << endl;
        }
    }
    ofs.close();
    return N;
}
int readFile(string file)
{
    ifstream ifs;
    int N;
    int ID;
    string Ename;
    string Dname;
    double S;

    ifs.open(file);
    if (!ifs)
    {
        cout << "File Open Error\n";
        exit(0);
    }
    else
    {
        ifs >> N;
    }
    for (size_t i = 0; i < N; i++)
    {
        ifs >> ID >> Ename >> Dname >> S;
        cout << ID << " " << Ename << " " << Dname << " " << S << endl;
    }
    return N;
    
}
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string st = "My name";

    cout << st.length() << endl;

    cout << st.at(5) << endl;

    cout << st.append(" I am goking :-) my name is sarey") << endl;

    cout << st.insert(7, " Ali") << endl;

    cout << st.substr(0, 8) << endl;
    
    st.push_back('V');
    cout << st << endl;

    st.pop_back();
    cout << st << endl;

    cout << st.find("My") << endl;
    cout << st.find("Sohaip") << endl;

    if (st.find("Sohaip") == st.npos)
    {
        cout << "Sohaip not found" << endl;
    }

    int x = st.find("Ali");
    st.erase(x, 3);
    st.insert(x, "Omar");
    cout << st << endl;
    
    st.clear();
    cout << st << endl;


}
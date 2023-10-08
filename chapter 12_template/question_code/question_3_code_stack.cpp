//concept -LIFO
//stack has only three functions -push,pop,top
//through indexing(i) we can not access the elements
//pop from back
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st1;
    st1.push(51);
    st1.push(52);
    st1.push(53);
    st1.push(54);

    cout<<"st.size() = "<<st1.size()<<endl;
    cout<<"st.top() = "<<st1.top()<<endl;
    st1.pop();
    cout<<"after pop :"<<endl;
    cout<<"st.size() = "<<st1.size()<<endl;
    cout<<"st.top() = "<<st1.top()<<endl;
    cout<<"st.empty() = "<<st1.empty()<<endl;

    stack<int>st2;
    st2.push(11);
    st2.push(12);
    st2.push(13);
    st2.push(14);

    cout<<"before swapping top of stack1 = "<<st1.top()<<endl;
    cout<<"before swapping top of stack2 = "<<st2.top()<<endl;
    st1.swap(st2);
    cout<<"after swapping top of stack1 = "<<st1.top()<<endl;
    cout<<"after swapping top of stack2 = "<<st2.top()<<endl;

}

//C++ programs on types of inheritance

//single (or) simple inheritance
#include <iostream>

using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"hello\n";
    }
};
class B:public A
{
    public:
    void show()
    {
    cout<<"world\n";
        
    }
};
int main()
{
    B b;
    b.display();
    b.show();

    return 0;
}


//multiple inheritance
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"multiple\n";
    }
};
class B
{
    public:
    void output()
    {
        cout<<"inheritance\n";
    }
};
class C:public A,public B
{
    public:
    void show()
    {
        cout<<"derived class\n";
    }
};
int main()
{
    C d;
    d.display();
    d.output();
    d.show();
    return 0;
}


//multilevel inheritance
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"multilevel\n";
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"inheritance\n";
    }
};
class C:public B
{
    public:
    void output()
    {
        cout<<"derived class\n";
    }
};
int main()
{
    C c;
    c.display();
    c.show();
    return 0;
}


//multipath inheritance
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"multipath\n";
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"inhritance\n";
    }
};
class C:public A
{
    public:
    void output()
    {
        cout<<"in c++\n";
    }
};
class D:public A,public B,public C
{
    public:
    void total_output()
    {
        cout<<"derived class\n";
    }
};
int main()
{
    D d;
    d.show();
    d.output();
    d.total_output();
    B b;
    b.display();
    return 0;
}





//heirarichal inheritance
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"base class\n";
    }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"subclass 1\n";
    }
};
class C:public A
{
    public:
    void output()
    {
        cout<<"baseclass 2\n";
    }
};
int main()
{
    B b;
    b.display();
    b.show();
    C c;
    c.display();
    c.output();
    return 0;
}


//hybrid inheritance
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"baseclass\n";
    }
};
class B:public A
{
    public:
    void show()
    {
    cout<<"derived class of A\n";
    }
};
class C:public B
{
    public:
    void output()
    {
        cout<<"derived class of B\n";
    }
};
int main()
{
    C c;
    c.display();
    c.show();
    c.output();
    return 0;
}



//single inheritance derivating class privately
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"hello\n";
    }
};
class B:private A
{
    public:
    void show()
    {
        display();
        cout<<"world\n";
    }
};
int main()
{
    B b;
    b.show();
    return 0;
}



//multiple inheritance deriving classes privately
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"base class 1\n";
    }
};
class B
{
    public:
    void show()
    {
        cout<<"base class 2\n";
    }
};
class C:private A,private B
{
    public:
    void total_output()
    {
        display();
        show();
        cout<<"derived class\n";
    }
};
int main()
{
    C c;
    c.total_output();
    return 0;
}


//multilevel inheritance deriving classes privately
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"base class A\n";
    }
};
class B:private A
{
    public:
    void show()
    {
        display();
     cout<<"derived class pf a\n";
    }
};
class C:private B
{
    public:
    void total_output()
    {
        show();
        cout<<"derived class of B\n";
    }
};
int main()
{
    C c;
    c.total_output();
    return 0;
}


//heirarichal inheritance deriving classes privately
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"base class A\n";
    }
};
class B:private A
{
    public:
    void show()
    {
        display();
        cout<<"derived class B of A\n";
    }
};
class C:private A
{
    public:
    void output()
    {
        display();
        cout<<"derived class C of A\n";
    }
};
int main()
{
    B b;
    b.show();
    C c;
    c.output();
    return 0;
}


//hybrid inheritance deriving classes privately
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"base class A\n";
    }
};
class B:private A
{
    public:
    void show()
    {
        display();
        cout<<"derived class of A\n";
    }
};
class C:private B
{
    public:
    void output()
    {
        show();
        cout<<"derived class of C\n";
    }
};
int main()
{
    C c;
    c.output();
    return 0;
}


//multipath inheritance deriving classes privately
#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"base class A\n";
    }
};
class B:private A
{
    public:
    void show()
    {
        display();
        cout<<"derived class B of A\n";
    }
};
class C:private A
{
    public:
    void output()
    {   display();
        cout<<"derived class C of A\n";
    }
};
class D:private A,private B,private C
{
    public:
    void total_output()
    {
        show();
        output();
        cout<<"derived class D of A,B,C\n";
    }
};
int main()
{
    D d;
    d.total_output();
    return 0;
}

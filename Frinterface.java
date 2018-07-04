import java.util.*;
//hello
//integrating with tower
 interface cut
{
public void show(int a);
public void calc();

}
class em implements cut
{
public void show(int a)
{
System.out.println(a);
}
public void calc()
{

System.out.println("ITS WORKING");
}

}
class another implements cut
{
public void show(int a)
{
System.out.println(a);
}
public void calc()
{

System.out.println("ITS WORKING on other class without overriding");
}

}
//int a=10;
//@override

public class Frinterface implements cut
{
public void show(int a)
{
System.out.println(a);

}
//only when super class method are used we have to override..not for interface
public void calc()
{
System.out.println("yes");
}

public static void main(String args[])
{
em ee=new em();
ee.show(15);
ee.calc();
another a=new another();
a.show(20);
a.calc();
Frinterface e=new Frinterface();
e.show(10);
e.calc();
}
}

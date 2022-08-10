For each class we have we have the typical getters and setters that we have come to expect from every
class declaration thus far, but additionally to that, there has been included some brand new 
implementation of methods inside each class: polymorphism. 
We have already dealt with the concept of herency in the last activity, which was found to be very
useful, but know, we are making things even more optimized than they were before by using 
polymorphism. 
As you can see in the 'Employee.h', there are two methods that have the reserved word 'Virtual'. This
indicates us that this method in the child classes (which are 'Boss' and 'CommissionWorker') are going
to have different procedures and different return values when the method is called in the main. But,
if you dig a little bit further, you will see that both virtual methods are still declared in the 
'Employee.cpp', which is a curious thing to see because normally the methods that are virtual are not
declared in the cpp file, nevertheless, this decision was made because I decided that employees that
are neither bosses nor commission workers (just employees) also have the oportunity to participate in
the development of this program. 

Heading to the 'main.cpp' we can see that there has been a new type added: the vector of pointers type.
This concept is of a very good use to us, because it can help us to store how many Employees we want 
in it, and then we have the option to get the information we need from every Employee that we want.
This is best seen at the end of the main function. The for loop is used to iterate in the array and
call the proper function which allow us to see the full details of each employee that we have 
registered in the vector. Not to mention that this is a more effective way to do it than with arrays.
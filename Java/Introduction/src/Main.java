//INTRO

public class Main {

    public static void main(String[] args){
        //this is a comment
        /*
        this is a multiple line comment
        */
        System.out.print("I like pizza\n");
        System.out.print("Its very cheesy\n");
        System.out.print("can you buy me one\n");
        // type sout for a short cut
        System.out.print("like this\n");


        // Variables - a reusable container for a value, a variable behaves as if it was the value it contains

        // * Primitive = simple value stores directly in memory (stack) = int,double,char, boolean.
        // * Reference = memory address (stack) that points to the (heap) = string,array,object.

        // 1. declaration
        // 2. Assignment


        //Primitives
        int age = 19;
        int year = 2006;
        int quantity = 2;

        double price =9.99;
        double gpa = 1.0;
        double temprature = 36.6;

        System.out.println(age);
        System.out.println(year);
        System.out.println(quantity);

        System.out.println("your grade is " + gpa);

        char grade = 'C';

        boolean isStudent = true;
        boolean forSale = false;
        boolean isOnline = true;


        System.out.println(age);
        System.out.println(year);
        System.out.println(quantity);
        //example only for the use of boolean

        if (isStudent){
            System.out.println("you are a student");
        }
        else {
            System.out.println("you are not a student");
        }
        // references
        String name = "Christian";
        String girlfriend = "Maxine";


        System.out.println("hello " + name + " your age is " + age);
        System.out.println("your gpa is " + gpa);
        System.out.println("You love " + girlfriend);

    }
}

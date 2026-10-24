import java.util.Scanner; //this is to import the scanner

public class main {
    public static void main(String [] args){

        //scanners are for user inputs
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = scanner.nextLine();

        System.out.println("So your name is " + name + ", \n now can you input your age so we can determine if you are legal : ");

        int age = scanner.nextInt();

        if (age >= 18){
            System.out.println("You are old enough");
        }
        else {
            System.out.println("You are not old enough");
        }
        System.out.println("Are you a student? (true/false): ");
        boolean isStudent = scanner.nextBoolean();

        System.out.println("Student: " + isStudent);

        System.out.println("What is your GPA: ");

        double gpa = scanner.nextDouble();

        if (gpa < 1.0 || gpa > 5.0) {
            System.out.println("Invalid grade");
        } else if (gpa <= 1.25) {
            System.out.println("Presidential Lister");
        } else if (gpa <= 2.0) {
            System.out.println("Dean's Lister");
        } else if (gpa <= 3.0) {
            System.out.println("Average");
        } else {
            System.out.println("Failed");
        }

        //calculated area of rectangle
        double width = 0;
        double height = 0;
        double area = 0;

        System.out.print("Please enter your width: ");
        width = scanner.nextDouble();

        System.out.print("Please enter your height: ");
        height = scanner.nextDouble();

        area = width * height;

        System.out.print("The area is: " + area + "cm²");
        scanner.close();

    }
}

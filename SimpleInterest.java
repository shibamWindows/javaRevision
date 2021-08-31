import java.util.*;
class SimpleInterest
{
    public static void main()
    {
        Scanner in=new Scanner(System.in);
        String name;
        int time;
        double principal,rate;
        double SI;
        System.out.println("Enter name of the person");
        name=in.nextLine();
        System.out.println("Enter principal amount");
        principal=in.nextDouble();
        System.out.println("Enter rate of interest");
        rate=in.nextDouble();
        System.out.println("Enter time");
        time=in.nextInt();
        
        SI=principal*rate*time/100 ;
        System.out.println("The simple interest is = "+SI);
    }
}

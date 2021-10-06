public class LightBill {

	public static void main(String [] args)

	{

	    int unit;

	    float amt, total_amt, sur_charge;

	    //needed for user input

	    Scanner sc = new Scanner(System.in);

	    /* Input unit consumed from user */

	    System.out.println("Enter total units consumed: ");

	    unit=sc.nextInt();

	    /* Calculate electricity bill according to given conditions */

	    if(unit <= 50)

	    {

	        amt = (float) (unit * 0.50);

	    }

	    else if(unit <= 150)

	    {

	        amt = (float) (25 + ((unit-50) * 0.75));

	    }

	    else if(unit <= 250)

	    {

	        amt = (float) (100 + ((unit-150) * 1.20));

	    }

	    else

	    {

	        amt = (float) (220 + ((unit-250) * 1.50));

	    }

	    /*

	     * Calculate total electricity bill

	     * after adding surcharge

	     */

	    sur_charge = (float) (amt * 0.20);

	    total_amt  = amt + sur_charge;

	    System.out.println("Electricity Bill = Rs. "+ total_amt);

	}

}


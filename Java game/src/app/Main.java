package app;

import util.Satchel;

/**
 * Created by sophianguyen on 2016-07-06.
 */
public class Main {
    public static void main(String[] args) {
        Satchel mySatchel = new Satchel();

        int inventorysize = mySatchel.size();
        System.out.println(inventorysize);
    }
}

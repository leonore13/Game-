package util;

import java.util.ArrayList;

/**
 * Created by sophianguyen on 2016-07-06.
 */
public class Satchel {
    // How many inventory slots are available in the satchel
    private int numSlots;

    // EFFECTS: Array of items in inventory; inventory is empty;
    public ArrayList<Items> inventory;

    //EFFECTS: Constructor: Satchel is empty, and has 10 slots available
    public Satchel() {
        numSlots = 10;
        inventory = new ArrayList<>();
    }

    // EFFECTS: Add items to the inventory
    public void add(Items item) {
        //TO-DO
    }
    // EFFECTS: Remove items from the inventory
    public void remove(Items item) {
        //TO-DO
    }

    // EFFECTS: Returns true if the item is in the satchel
    public boolean contains(Items item){
        //TO-DO
        return false;
    }

    //EFFECT: Returns items in the satchel
    public ArrayList<Items> contents() {
        //TO-DO
        return null;
    }

    //EFFECTS: Returns number of slots available in satchel
    public int size() {
        return inventory.size();
    }
}

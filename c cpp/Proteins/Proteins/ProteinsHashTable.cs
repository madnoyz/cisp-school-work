/***
 *      Title:      ProteinsHashTable.cs 
 *      Author:     Clyde Pabro
 *      Update:     15 Nov 2012
 *      Created:    8 Nov 2012
 *      Description:
 *                  This program reads a protein text file and places the value in a hash table.
 *                  User requests a protein sequence and the protein count will be displayed.
 * ***/

using System;
using System.Collections;
using System.Linq;
using System.Text;
using System.IO;

namespace Proteins
{
    class ProteinsHashTable
    {
        static void Main(string[] args)
        {
            const string f = "proteins.txt";

            //counts the proteins. need to fix. waste of space.
            int[] counter = new int[500];       

            Hashtable proteinTable = new Hashtable(40);

            using (StreamReader sr = new StreamReader(f))
            {
                string protein;
                while ((protein = sr.ReadLine()) != null)
                {

                    /**
                     *  Creates the key for the hashtable.
                     * **/
                    int firstKeyValue = Convert.ToInt32(protein[0]);
                    int lastKeyValue = Convert.ToInt32(protein[protein.Length - 1]);

                    int hashkey = (firstKeyValue + (2 * lastKeyValue)) % 40;

                    /**
                     * Places the values into the protein hash table.
                     * Adds to the counter of proteins. need fixing.
                     * **/
                    try
                    {
                        proteinTable.Add(hashkey, protein);
                        //if( proteinTable.ContainsValue(protein))
                        //    counter[hashkey]++;
                    }
                   catch
                    {
                       /***
                        * Warning: Collisions detected. Step through index by 1.
                        * When a slot is open, the key and value is placed into
                        * the table.
                        * **/
                        //if (proteinTable.ContainsValue(protein))
                        //    counter[hashkey]++;
                        while (proteinTable.Contains(hashkey))
                        {
                            hashkey += 1;
                        }
                        proteinTable.Add(hashkey, protein);
                    }// end of try catch
                }//end of while
            }//end of using StreamReader

            // Check HashTable with Keys and Values ***
            Console.WriteLine(String.Format("{0,-40} {1, 10}", "\nProtein", "Count"));
            foreach (int line in proteinTable.Keys)
            {
                string proteinCounter = proteinTable[line] as string;
                int addValues = 0;
                foreach (char element in proteinCounter)
                {
                    int counterValue = Convert.ToInt32(element);
                    addValues += counterValue;
                    counter[line] = addValues;
                }
                Console.WriteLine(String.Format("{0, -40} {1, 9}", proteinCounter, counter[line]));
            }
             


            /**
             * User will input a protein sequence. When protein is found,
             * the counter value for the protein will be written to console.
             * if not found, the indexing will step through the hashkeys
             * till the correct value is found. 
             * ***/
            string done = "";
            while ( done != "-1")
            {
                Console.WriteLine("Enter a protein sequence: ");
                string userInput = Console.ReadLine();

                int firstKeyValue = Convert.ToInt32(userInput[0]);
                int lastKeyValue = Convert.ToInt32(userInput[userInput.Length - 1]);

                int hashkey = (firstKeyValue + (2 * lastKeyValue)) % 40;

                if (proteinTable.ContainsValue(userInput))
                {
                    if (proteinTable.Contains(userInput))
                    {
                        string proteinFound = proteinTable[hashkey] as string;
                        Console.WriteLine(String.Format("{0,-40} {1, 10}", "\nProtein", "Count"));
                        Console.WriteLine(String.Format("{0, -40} {1, 9}", proteinFound, counter[hashkey]));
                    }
                    else 
                    {
                        /**
                         * If the protein is not found, then program will step through
                         * the hashkeys till the value is found. Prints out the results
                         * to the console. 
                         * **/
                        int newHashKey = hashkey;
                        string proteinFound2 = proteinTable[hashkey] as string;
                        while ( proteinFound2 != userInput)
                        {
                            newHashKey += 1;
                            proteinFound2 = proteinTable[newHashKey] as string;
                        }//End of while
                        
                        Console.WriteLine(String.Format("{0,-40} {1, 10}", "\nProtein", "Count"));
                        Console.WriteLine(String.Format("{0, -40} {1, 9}", proteinFound2, counter[hashkey]));
                    }// End of if
                }
                else 
                {
                    Console.WriteLine("Key not Found!!");
                } // End of if

                // Restarts program per user request.
                Console.WriteLine("\nHit enter to continue or type -1 to end program. ");
                done = Console.ReadLine();
            }// End of while

        }// End of Main

        public static string proteinFound { get; set; }
    }// End of Class
}// End of Namespace

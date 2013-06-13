using CipherV;
using System;

namespace CipherV
{
    class Program
    {
        static void Main(string[] args)
        {
            SecurityAlgorithm target = new Vigenere("clyde");
            string plain = "We the People  of the United States in Order to form a more perfect Union establish Justice insure domestic Tranquility provide for the common defence promote the general Welfare and secure the Blessings of Liberty to ourselves and our Posterity do ordain and establish this Constitution for the United States of America";
            plain = plain.ToLower().Replace(" ","");
            string actual = target.Encrypt(plain);
            Console.WriteLine(actual);
            Console.ReadLine();
        }
    }
}

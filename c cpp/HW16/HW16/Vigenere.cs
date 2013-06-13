using CipherV;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CipherV
{
    class Vigenere : SecurityAlgorithm
    {
        string key;

        public Vigenere(string key)
        {
            this.key = key;
        }

        public override string Encrypt(string plainText)
        {
            return Process(plainText);
        }
        
        internal static int GetAlphabetPosition(int textPosition, int keyPosition)
        {
            int result = 0;

            result = (textPosition + keyPosition) % 26;
            return result;
        }

        private string Process(string message) 
        {
            key = key.ToString().ToLower().Replace(" ", "");
            key = DuplicateKey( message, key);
            return Shift(message, key, alphabet);
        }

        internal static string Shift(string token, string Key, Dictionary<char, int> alphabetSorted) 
        {
            string result = "";
            int textPosition, keyPosition, resPosition = 0;
            for (int i = 0; i < token.Length; i++) 
            {
                textPosition = alphabetSorted[token[i]];
                keyPosition = alphabetSorted[Key[i]];
                resPosition = GetAlphabetPosition(textPosition, keyPosition);
                result += alphabetSorted.Keys.ElementAt(resPosition);
            }
            return result;
        }

        private string DuplicateKey(string message, string key) 
        {
            if (key.Length < message.Length) 
            {
                int length = message.Length - key.Length;
                for (int k = 0; k < length; k++)
                {
                    key += key[k % key.Length];
                }
            }
            return key;
        }
    }
}

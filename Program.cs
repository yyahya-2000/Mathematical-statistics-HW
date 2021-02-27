using System;
using System.IO;
namespace HW1
{
    class Program
    {
        static readonly Random rnd = new Random();
        static void Main(string[] args)
        {
            //the input data
            int[] data = { 24, 22, 25, 41, 19, 94, 24, 17, 20, 16, 23, 25, 15, 22, 21, 16, 24, 56, 9, 20, 22, 24 };
            int sum;
            double res;
            using (FileStream fs = new FileStream("../../res.txt", FileMode.OpenOrCreate, FileAccess.Write))
            using (StreamWriter writer = new StreamWriter(fs))
            {
                for (int i = 0; i < 1000; i++)
                {
                    sum = 0; ;
                    for (int j = 0; j < 22; j++)
                        sum += data[rnd.Next(0, data.Length)];
                    res = sum / 22.0;
                    writer.WriteLine(res);
                }
            }
        }

    }
}

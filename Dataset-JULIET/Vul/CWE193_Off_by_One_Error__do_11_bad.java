class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                int[] VAR3 = new int[10];
                int VAR4 = 0;
                do
                {
                    VAR2.writeLine("" + VAR4 + "" + (VAR3[VAR4] = VAR4));
                    VAR4++;
                }
                while (VAR4 <= VAR3.length);   
            }
        }
};
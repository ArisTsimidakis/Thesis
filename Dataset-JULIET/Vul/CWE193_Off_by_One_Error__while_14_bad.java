class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3 == 5)
            {
                int[] VAR4 = new int[10];
                int VAR5 = 0;
                
                while (VAR5 <= VAR4.length)
                {
                    VAR2.writeLine("" + VAR5 + "" + (VAR4[VAR5] = VAR5));
                    VAR5++;
                }
            }
        }
};
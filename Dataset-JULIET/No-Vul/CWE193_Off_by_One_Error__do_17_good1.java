class VAR1{
    private void FUN1() throws Throwable
        {
            for(int VAR2 = 0; VAR2 < 1; VAR2++)
            {
                int[] VAR3 = new int[10];
                int VAR4 = 0;
                do
                {
                    VAR5.writeLine("" + VAR4 + "" + (VAR3[VAR4] = VAR4));
                    VAR4++;
                }
                while (VAR4 < VAR3.length);   
            }
        }
};
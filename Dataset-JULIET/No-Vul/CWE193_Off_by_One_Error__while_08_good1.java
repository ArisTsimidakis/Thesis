class VAR1{
    private void FUN1() throws Throwable
        {
            if (FUN2())
            {
                
                VAR2.writeLine("");
            }
            else
            {
    
                int[] VAR3 = new int[10];
                int VAR4 = 0;
    
                
                while (VAR4 < VAR3.length)
                {
                    VAR2.writeLine("" + VAR4 + "" + (VAR3[VAR4] = VAR4));
                    VAR4++;
                }
    
            }
        }
};
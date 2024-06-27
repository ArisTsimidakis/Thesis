class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (FUN2())
            {
                
                VAR2 = (new FUN3()).nextInt();
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (FUN2())
            {
                
                int VAR3[] = { 0, 1, 2, 3, 4 };
                
                if (VAR2 >= 0 && VAR2 < VAR3.length)
                {
                    VAR3[VAR2] = 42;
                }
                else
                {
                    VAR4.writeLine("");
                }
            }
        }
};
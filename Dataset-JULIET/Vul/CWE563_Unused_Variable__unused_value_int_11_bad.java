class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = 5;
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if(VAR3.FUN2())
            {
                
                VAR2 = 10;
                VAR3.writeLine("" + VAR2);
            }
        }
};
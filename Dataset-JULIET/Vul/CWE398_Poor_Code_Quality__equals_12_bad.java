class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                int VAR3 = 1;
                VAR2.writeLine(VAR3);
                
                VAR3 = VAR3;
                VAR2.writeLine(VAR3);
            }
            else
            {
    
                int VAR3 = 1, VAR4 = 5;
    
                VAR2.writeLine(VAR3);
    
                
                VAR3 = VAR4;
    
                VAR2.writeLine(VAR3);
    
            }
        }
};
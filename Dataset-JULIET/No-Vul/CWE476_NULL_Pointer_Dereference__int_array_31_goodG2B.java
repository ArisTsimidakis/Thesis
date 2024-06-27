class VAR1{
    private void FUN1() throws Throwable
        {
            int [] VAR2;
            {
                int [] VAR3;
    
                
                VAR3 = new int[5];
    
                VAR2 = VAR3;
            }
            {
                int [] VAR3 = VAR2;
    
                
                VAR4.writeLine("" + VAR3.length);
    
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            {
                int VAR3;
    
                VAR3 = 0; 
    
                VAR2 = VAR3;
            }
            {
                int VAR3 = VAR2;
    
                
                if (VAR3 != 0)
                {
                    VAR4.writeLine("" + VAR3 + "" + (100 / VAR3) + "");
                }
                else
                {
                    VAR4.writeLine("");
                }
    
            }
        }
};
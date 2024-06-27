class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
            if(VAR3.FUN2())
            {
                
                VAR2 = null;
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            if(VAR3.FUN2())
            {
                
                VAR3.writeLine("" + VAR2.length());
            }
            else
            {
    
                
                if (VAR2 != null)
                {
                    VAR3.writeLine("" + VAR2.length());
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};
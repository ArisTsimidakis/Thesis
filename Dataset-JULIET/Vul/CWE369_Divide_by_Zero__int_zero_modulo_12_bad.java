class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = 0; 
            }
            else
            {
    
                
                VAR2 = 2;
    
            }
    
            if(VAR3.FUN2())
            {
                
                VAR3.writeLine("" + VAR2 + "" + (100 % VAR2) + "");
            }
            else
            {
    
                
                if (VAR2 != 0)
                {
                    VAR3.writeLine("" + VAR2 + "" + (100 % VAR2) + "");
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};
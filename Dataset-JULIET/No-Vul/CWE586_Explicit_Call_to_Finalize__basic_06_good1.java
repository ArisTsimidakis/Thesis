class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2 != 5)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                CWE586_Explicit_Call_to_Finalize__basic_Helper VAR4 = new FUN2();
    
                try
                {
                    VAR4.FUN3();
                }
                catch (Exception VAR5)
                {
                    VAR3.writeLine("");
                }
                finally
                {
                    
                    
                    VAR4 = null;
                }
    
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            if (false)
            {
                
                VAR2.writeLine("");
            }
            else
            {
    
                CWE586_Explicit_Call_to_Finalize__basic_Helper VAR3 = new FUN2();
    
                try
                {
                    VAR3.FUN3();
                }
                catch (Exception VAR4)
                {
                    VAR2.writeLine("");
                }
                finally
                {
                    
                    
                    VAR3 = null;
                }
    
            }
        }
};
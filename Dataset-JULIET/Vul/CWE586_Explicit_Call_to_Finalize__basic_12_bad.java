class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                CWE586_Explicit_Call_to_Finalize__basic_Helper VAR3 = new FUN3();
                try
                {
                    VAR3.FUN4();
                }
                catch (Exception VAR4)
                {
                    VAR2.writeLine("");
                }
                finally
                {
                    
                    
                    VAR3.FUN5();
                }
            }
            else
            {
    
                CWE586_Explicit_Call_to_Finalize__basic_Helper VAR5 = new FUN3();
    
                try
                {
                    VAR5.FUN4();
                }
                catch (Exception VAR4)
                {
                    VAR2.writeLine("");
                }
                finally
                {
                    
                    
                    VAR5 = null;
                }
    
            }
        }
};
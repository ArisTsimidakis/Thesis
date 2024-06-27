class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2 == 5)
            {
                CWE586_Explicit_Call_to_Finalize__basic_Helper VAR3 = new FUN2();
                try
                {
                    VAR3.FUN3();
                }
                catch (Exception VAR4)
                {
                    VAR5.writeLine("");
                }
                finally
                {
                    
                    
                    VAR3.FUN4();
                }
            }
        }
};
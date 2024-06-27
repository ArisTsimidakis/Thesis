class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3)
            {
                CWE586_Explicit_Call_to_Finalize__basic_Helper VAR4 = new FUN2();
                try
                {
                    VAR4.FUN3();
                }
                catch (Exception VAR5)
                {
                    VAR2.writeLine("");
                }
                finally
                {
                    
                    
                    VAR4.FUN4();
                }
            }
        }
};
class VAR1{
    private void FUN1() throws Throwable
        {
            if (FUN2())
            {
                CWE586_Explicit_Call_to_Finalize__basic_Helper VAR2 = new FUN3();
                try
                {
                    VAR2.FUN4();
                }
                catch (Exception VAR3)
                {
                    VAR4.writeLine("");
                }
                finally
                {
                    
                    
                    VAR2 = null;
                }
            }
        }
};
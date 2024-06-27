class VAR1{
    public void FUN1() throws Throwable
        {
            if (true)
            {
                CWE586_Explicit_Call_to_Finalize__basic_Helper VAR2 = new FUN2();
                try
                {
                    VAR2.FUN3();
                }
                catch (Exception VAR3)
                {
                    VAR4.writeLine("");
                }
                finally
                {
                    
                    
                    VAR2.FUN4();
                }
            }
        }
};
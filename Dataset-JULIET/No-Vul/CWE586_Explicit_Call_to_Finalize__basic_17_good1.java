class VAR1{
    private void FUN1() throws Throwable
        {
            for(int VAR2 = 0; VAR2 < 1; VAR2++)
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
                    
                    
                    VAR3 = null;
                }
            }
        }
};
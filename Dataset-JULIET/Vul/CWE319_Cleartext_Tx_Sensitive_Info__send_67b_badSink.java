class VAR1{
    public void FUN1(VAR2.Container VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.VAR5;
    
            Socket VAR6 = null;
            PrintWriter VAR7 = null;
    
            try
            {
                VAR6 = new Socket("", 1337);
                VAR7 = new FUN2(VAR6.getOutputStream(), true);
                
                VAR7.FUN3(VAR4);
            }
            catch (IOException VAR8)
            {
                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
            }
            finally
            {
                if (VAR7 != null)
                {
                    VAR7.close();
                }
    
                try
                {
                    if (VAR6 != null)
                    {
                        VAR6.close();
                    }
                }
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
            }
    
        }
};
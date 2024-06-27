class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            switch (6)
            {
            case 6:
                
                VAR2 = "";
                break;
            default:
                
                VAR2 = null;
                break;
            }
    
            switch (7)
            {
            case 7:
                Socket VAR3 = null;
                PrintWriter VAR4 = null;
                try
                {
                    VAR3 = new Socket("", 1337);
                    VAR4 = new FUN2(VAR3.getOutputStream(), true);
                    
                    VAR4.FUN3(VAR2);
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
                finally
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
                break;
            default:
                
                VAR6.writeLine("");
                break;
            }
        }
};
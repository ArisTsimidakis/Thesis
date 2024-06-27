class VAR1{
    public void FUN1() throws Throwable
        {
            switch (7)
            {
            case 7:
                BufferedReader VAR2 = null;
                InputStreamReader VAR3 = null;
                try
                {
                    VAR3 = new InputStreamReader(System.in, "");
                    VAR2 = new BufferedReader(VAR3);
                    
                    VAR4.writeLine(""); 
                    String VAR5 = VAR2.readLine();
                    VAR4.writeLine(""); 
                    String VAR6 = VAR2.readLine();
                    if (VAR5 != null && VAR6 != null)
                    {
                        
                        if (VAR5 == VAR6)     
                        {
                            VAR4.writeLine("");
                        }
                        else
                        {
                            VAR4.writeLine(""); 
                        }
                    }
                }
                catch (IOException VAR7)
                {
                    VAR4.VAR8.log(VAR9.VAR10, "", VAR7);
                }
                finally
                {
                    try
                    {
                        if (VAR2 != null)
                        {
                            VAR2.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR4.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR3 != null)
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR4.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
                break;
            default:
                
                VAR4.writeLine("");
                break;
            }
        }
};
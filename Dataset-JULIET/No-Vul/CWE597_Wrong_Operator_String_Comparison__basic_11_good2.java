class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2.FUN2())
            {
                BufferedReader VAR3 = null;
                InputStreamReader VAR4 = null;
                try
                {
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR3 = new BufferedReader(VAR4);
                    
                    VAR2.writeLine(""); 
                    String VAR5 = VAR3.readLine();
                    VAR2.writeLine(""); 
                    String VAR6 = VAR3.readLine();
                    if (VAR5 != null && VAR6 != null)
                    {
                        
                        if (VAR5.equals(VAR6))  
                        {
                            VAR2.writeLine("");
                        }
                        else
                        {
                            VAR2.writeLine("");
                        }
                    }
                }
                catch (IOException VAR7)
                {
                    VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                }
                finally
                {
                    try
                    {
                        if (VAR3 != null )
                        {
                            VAR3.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
    
                    try
                    {
                        if (VAR4 != null )
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR7)
                    {
                        VAR2.VAR8.log(VAR9.VAR10, "", VAR7);
                    }
                }
            }
        }
};
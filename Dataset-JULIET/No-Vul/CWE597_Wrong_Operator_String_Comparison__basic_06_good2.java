class VAR1{
    private void FUN1() throws Throwable
        {
            if (VAR2 == 5)
            {
                BufferedReader VAR3 = null;
                InputStreamReader VAR4 = null;
                try
                {
                    VAR4 = new InputStreamReader(System.in, "");
                    VAR3 = new BufferedReader(VAR4);
                    
                    VAR5.writeLine(""); 
                    String VAR6 = VAR3.readLine();
                    VAR5.writeLine(""); 
                    String VAR7 = VAR3.readLine();
                    if (VAR6 != null && VAR7 != null)
                    {
                        
                        if (VAR6.equals(VAR7))  
                        {
                            VAR5.writeLine("");
                        }
                        else
                        {
                            VAR5.writeLine("");
                        }
                    }
                }
                catch (IOException VAR8)
                {
                    VAR5.VAR9.log(VAR10.VAR11, "", VAR8);
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
                    catch (IOException VAR8)
                    {
                        VAR5.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR4 != null )
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR5.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
        }
};
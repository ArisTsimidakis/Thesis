class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3 == 5)
            {
                BufferedReader VAR4 = null;
                InputStreamReader VAR5 = null;
                try
                {
                    VAR5 = new InputStreamReader(System.in, "");
                    VAR4 = new BufferedReader(VAR5);
                    
                    VAR2.writeLine(""); 
                    String VAR6 = VAR4.readLine();
                    VAR2.writeLine(""); 
                    String VAR7 = VAR4.readLine();
                    if (VAR6 != null && VAR7 != null)
                    {
                        
                        if (VAR6 == VAR7)     
                        {
                            VAR2.writeLine("");
                        }
                        else
                        {
                            VAR2.writeLine(""); 
                        }
                    }
                }
                catch (IOException VAR8)
                {
                    VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                }
                finally
                {
                    try
                    {
                        if (VAR4 != null)
                        {
                            VAR4.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR8)
                    {
                        VAR2.VAR9.log(VAR10.VAR11, "", VAR8);
                    }
                }
            }
        }
};
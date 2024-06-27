class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
    
            VAR2 = VAR3.VAR4; 
    
            {
                InputStreamReader VAR5 = null;
                BufferedReader VAR6 = null;
    
                
                try
                {
                    VAR5 = new InputStreamReader(System.in, "");
                    VAR6 = new BufferedReader(VAR5);
    
                    
                    String VAR7 = VAR6.readLine();
                    if (VAR7 != null) 
                    {
                        try
                        {
                            VAR2 = VAR3.parseInt(VAR7.trim());
                        }
                        catch(NumberFormatException VAR8)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                        }
                    }
                }
                catch (IOException VAR13)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                }
                finally
                {
                    try
                    {
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                }
            }
            
    
            
            int VAR14 = (int)(VAR2 * VAR2);
    
            VAR9.writeLine("" + VAR14);
    
        }
};